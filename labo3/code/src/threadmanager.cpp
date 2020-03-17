#include <QCryptographicHash>
#include <QVector>
#include <QList>

#include "threadmanager.h"
#include "mythread.h"
#include "pcosynchro/pcothread.h"

/*
 * std::pow pour les long long unsigned int
 */
long long unsigned int intPow (
        long long unsigned int number,
        long long unsigned int index)
{
    long long unsigned int i;

    if (index == 0)
        return 1;

    long long unsigned int num = number;

    for (i = 1; i < index; i++)
        number *= num;

    return number;
}

ThreadManager::ThreadManager(QObject *parent) :
    QObject(parent)
{}


void ThreadManager::incrementPercentComputed(double percentComputed)
{
    emit sig_incrementPercentComputed(percentComputed);
}

QVector<unsigned int> ThreadManager::findEqualDistribution(const int hashToCompute, const int nbThreads){
    QVector<unsigned int> distribution(nbThreads);
    int baseDistribution = hashToCompute / nbThreads;
    int extraHashToCompute = hashToCompute % nbThreads;

    for(int i = 0; i < nbThreads; i++){
        distribution[i] = baseDistribution;
        if(i < extraHashToCompute){
            distribution[i]++;
        }
    }
    return distribution;
}

QVector<QVector<unsigned int>> ThreadManager::findStartingPasswordStates(const QVector<unsigned int> distribution, const int passwordSize, const QString charset){
    QVector<QVector<unsigned int>> passwordsArrays(distribution.size(), QVector<unsigned int>(passwordSize));
    QVector<unsigned int> currentPasswordArray(passwordSize);
    unsigned int sum = 0;
    unsigned int base = charset.size();

    /* Etant donné que la boucle for trouve le passwordArray de base pour chaque thread en se basant sur la somme de hash
     * calculé par les threads précédent, le premier thread lui commence avec le passwordArray [0,0, ... ,0, 0]
    */
    currentPasswordArray.fill(0, passwordSize);
    passwordsArrays[0] = currentPasswordArray;

    for(int i = 0; i < distribution.size() - 1; i++){
        sum += distribution[i];

        unsigned int starterHashId = sum + 1;

        while(starterHashId > base){
            unsigned int remainder = starterHashId % base;
            // Ecriture de l'entier de poids faible d'ordre i
            currentPasswordArray[i] = remainder;
            starterHashId = starterHashId / base;
        }

        // Ajout du passwordArray courant aux solutions
        passwordsArrays[i + 1] = currentPasswordArray;
    }

    return passwordsArrays;
}

/*
 * Les paramètres sont les suivants:
 *
 * - charset:   QString contenant tous les caractères possibles du mot de passe
 * - salt:      le sel à concaténer au début du mot de passe avant de le hasher
 * - hash:      le hash dont on doit retrouver la préimage
 * - nbChars:   le nombre de caractères du mot de passe à bruteforcer
 * - nbThreads: le nombre de threads à lancer
 *
 * Cette fonction doit retourner le mot de passe correspondant au hash, ou une
 * chaine vide si non trouvé.
 */
QString ThreadManager::startHacking(
        QString charset,
        QString salt,
        QString hash,
        unsigned int nbChars,
        unsigned int nbThreads
)
{
    long long unsigned int nbToCompute;

    QString currentPasswordString;
    QVector<unsigned int> currentPasswordArray;
    QString currentHash;
    QCryptographicHash md5(QCryptographicHash::Md5);

    QVector<unsigned int> distribution;
    QVector<QVector<unsigned int>> startingPasswordsStates;

    MyThread bruteForceEnv(charset, salt, hash, nbChars);

    QList<PcoThread*> threadList;

    nbToCompute = intPow(charset.length(), nbChars);

    distribution = findEqualDistribution(nbToCompute, nbThreads);
    startingPasswordsStates = findStartingPasswordStates(distribution, nbChars, charset);

    // QVector<unsigned int> currentPasswordArray, unsigned int nbToCompute, void (*updateLoadingBar) (double)

    for(int i = 0; i < (int)nbThreads; i++){
        PcoThread *currentThread = new PcoThread(bruteForceEnv.startBruteForce, startingPasswordsStates.at(i), distribution.at(i), this);
        threadList.push_back(currentThread);
    }

    for (int i = 0; i < threadList.size(); i++){
        threadList[i]->join();
    }

    threadList.clear();

    return bruteForceEnv.getSolution();
}
