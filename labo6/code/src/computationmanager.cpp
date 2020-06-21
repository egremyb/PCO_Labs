//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteurs : Arthur Bécaud, Bruno Egremy


// A vous de remplir les méthodes, vous pouvez ajouter des attributs ou méthodes pour vous aider
// déclarez les dans ComputationManager.h et définissez les méthodes ici.
// Certaines fonctions ci-dessous ont déjà un peu de code, il est à remplacer, il est là temporairement
// afin de faire attendre les threads appelants et aussi afin que le code compile.

#include "computationmanager.h"


ComputationManager::ComputationManager(int maxQueueSize):
    MAX_TOLERATED_QUEUE_SIZE(maxQueueSize),
    requests((size_t) ComputationType::NB_TYPE),
    waitRequestType((size_t) ComputationType::NB_TYPE),
    waitQueuesFreeSpace((size_t) ComputationType::NB_TYPE),
    idCnt(0),
    nbComputerWaiting((size_t) ComputationType::NB_TYPE)
{
    for (size_t i = 0; i < (size_t) ComputationType::NB_TYPE; i++) {
        nbComputerWaiting.at(i) = 0;
    }
}

int ComputationManager::requestComputation(Computation c) {

    monitorIn();

    // Verify if the appropriate queue as less than MAX_TOLERATED_QUEUE_SIZE requests.
    if (requests.at((int) c.computationType).size() == MAX_TOLERATED_QUEUE_SIZE) {

        leaveMonitorIfStopped();

        wait(waitQueuesFreeSpace.at((size_t) c.computationType));

        leaveMonitorIfStopped();
    }

    // Add a request to the appropriate queue.
    requests.at((int) c.computationType).push_back(Request(c, (int) idCnt));

    // Add a placeholder result.
    resultsIndex.insert(std::pair<id, listIndex>(idCnt, results.end()));

    // Make a signal for the new request
    signal(waitRequestType.at((size_t) c.computationType));

    monitorOut();

    return (int) idCnt++;
}

void ComputationManager::abortComputation(int id) {
    monitorIn();

    auto iterator = resultsIndex.find(id);

    // Verify if the id exist.
    if (iterator == resultsIndex.end()) {
        monitorOut();
        return;
    }

    // Verify if a result already exist.
    if (iterator->second != results.end()) {
        results.erase(iterator->second);
    } else {
        // If not,
        // try to find the request using the given id.
        // If the request is found, removes it
        // from the requests deque and from the 'resultsIndex' map.
        for (size_t i = 0; i < (size_t) ComputationType::NB_TYPE; i++) {
            for (size_t j = 0; j < requests.at(i).size(); j++) {
                if (requests.at(i).at(j).getId() == id) {
                    requests.at(i).erase(requests.at(i).begin() + j);

                    // Signal that a request was deleted.
                    // There is now room for a new one.
                    signal(waitQueuesFreeSpace.at(i));

                    monitorOut();
                    return;
                }
            }
        }
    }

    // Remove the resultIndex in all cases.
    resultsIndex.erase(id);

    monitorOut();
}

Result ComputationManager::getNextResult() {

    monitorIn();

    // Verify if the next result is available.
    while (resultsIndex.empty() || resultsIndex.begin()->second == results.end()) {

        leaveMonitorIfStopped();

        wait(waitResult);

        leaveMonitorIfStopped();
    }

    // Retrieve the result from the list.
    Result result = *(resultsIndex.begin()->second);

    // Remove the result from the list and the result entry from the map.
    results.erase(resultsIndex.begin()->second);
    resultsIndex.erase(resultsIndex.begin());

    monitorOut();

    return result;
}

Request ComputationManager::getWork(ComputationType computationType) {

    monitorIn();

    // Verify if there is a request in the appropriote queue.
    if (requests.at((size_t) computationType).empty()) {

        leaveMonitorIfStopped();

        ++nbComputerWaiting.at((size_t) computationType);
        wait(waitRequestType.at((size_t) computationType));
        --nbComputerWaiting.at((size_t) computationType);

        leaveMonitorIfStopped();
    }

    // Retrieve and remove the request from the appropriate queue.
    Request request = requests.at((size_t) computationType).front();
    requests.at((size_t) computationType).pop_front();

    // Signal that a request was retrieved and removed from the appriopriate queue.
    signal(waitQueuesFreeSpace.at((size_t) computationType));

    monitorOut();

    return request;
}

bool ComputationManager::continueWork(int id) {
    monitorIn();

    // Verify if the 'stop()' function was called.
    if (stopped == true) {
        monitorOut();
        return false;
    }

    // Try to found resultIndex is found with the given id.
    bool canContinueToWork = resultsIndex.find(id) != resultsIndex.end();

    monitorOut();

    return canContinueToWork;
}

void ComputationManager::provideResult(Result result) {

    monitorIn();

    // If the computation was aborted, there is no need to provide any result.
    if (resultsIndex.find(result.getId()) == resultsIndex.end()) {
        monitorOut();
        return;
    }

    // Add the result to the vector.
    results.push_back(result);

    // Add the iterator to the result in the list 'results'.
    resultsIndex[result.getId()] = --(results.end());

    // Signal that a new result is available.
    signal(waitResult);

    monitorOut();
}

void ComputationManager::stop() {
    monitorIn();
    stopped = true;

    for (size_t i = 0; i < (size_t) ComputationType::NB_TYPE; i++) {
        auto nbToSignal = nbComputerWaiting.at(i);
        for (size_t j = 0; j < nbToSignal; j++) {
            signal(waitRequestType.at(i));
        }
        signal(waitQueuesFreeSpace.at(i));
    }
    signal(waitResult);

    monitorOut();
}

void ComputationManager::leaveMonitorIfStopped() {
    // Use 'throwStopException' if the 'stop()' function was called.
    if (stopped == true) {
        monitorOut();
        throwStopException();
    }
}
