//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteurs : Arthur Bécaud, Bruno Egremy

#include "pcocablecar.h"
#include <pcosynchro/pcothread.h>

#include <QDebug>
#include <QRandomGenerator>
constexpr unsigned int MIN_SECONDS_DELAY = 1;
constexpr unsigned int MAX_SECONDS_DELAY = 5;
constexpr unsigned int SECOND_IN_MICROSECONDS = 1000000;


// Initialise les membres statiques de la classe
unsigned int PcoCableCar::nbSkiersWaiting = 0;
PcoSemaphore PcoCableCar::skiersWaitingOutside(0);
PcoSemaphore PcoCableCar::skiersWaitingInside(0);
PcoSemaphore PcoCableCar::mutexNbSkiersWaiting(1);

PcoCableCar::PcoCableCar(const unsigned int capacity) : capacity(capacity) { }

PcoCableCar::~PcoCableCar() { }

void PcoCableCar::waitForCableCar(int id)
{
    // Increment du nombre de skieurs en attente
    mutexNbSkiersWaiting.acquire();
    nbSkiersWaiting++;
    mutexNbSkiersWaiting.release();

    qDebug() << "Skieur" << id << "attend en bas";

    // Fait attendre le skieur
    skiersWaitingOutside.acquire();
}

void PcoCableCar::waitInsideCableCar(int id)
{
    skiersWaitingInside.acquire();
}

void PcoCableCar::goIn(int id) { }

void PcoCableCar::goOut(int id) { }

bool PcoCableCar::isInService()
{
    return inService;
}

void PcoCableCar::endService()
{
    // Ferme le service du télécabine
    inService = false;

    // Débloque les skieurs en attente
    for (unsigned int i = 0; i < nbSkiersWaiting; i++) {
        skiersWaitingOutside.release();
    }
}

void PcoCableCar::goUp()
{
    qDebug() << "Telecabine monte avec" << nbSkiersInside << "skieur(s)," << nbSkiersWaiting << "attend(s) en bas";
    PcoThread::usleep((MIN_SECONDS_DELAY + QRandomGenerator::system()->bounded(MAX_SECONDS_DELAY + 1)) * SECOND_IN_MICROSECONDS);
}

void PcoCableCar::goDown()
{
    qDebug() << "Telecabine descend";
    PcoThread::usleep((MIN_SECONDS_DELAY + QRandomGenerator::system()->bounded(MAX_SECONDS_DELAY + 1)) * SECOND_IN_MICROSECONDS);
}

void PcoCableCar::loadSkiers()
{
    // Pour ne pas partir à vide, le télécabine
    // attend 5 secondes après chaque vérification
    // du nombre de skieurs en attente
    while (nbSkiersWaiting == 0 && isInService()) {
        PcoThread::usleep(5000000);
    }

    // Rempli le télécabine tant qu'il y a de la place
    // et qu'il y a des skieurs en attente
    while (nbSkiersInside < capacity && nbSkiersWaiting != 0) {

        // Autorise un skieur à monter dans le télécabine
        skiersWaitingOutside.release();

        // Décremente le nombre de skieurs en attente (section critique)
        mutexNbSkiersWaiting.acquire();
        nbSkiersWaiting--;
        mutexNbSkiersWaiting.release();

        // Incrémente le nombre de skieurs dans le télécabine
        nbSkiersInside++;
    }
}

void PcoCableCar::unloadSkiers()
{
    // Vide le télécabine tant qu'il y a des skieurs à l'intérieur
    while (nbSkiersInside != 0) {
        // Autorise un skieur à sortie du télécabine
        skiersWaitingInside.release();
        // Décremente le nombre de skieur à l'intérieur du télécabine
        nbSkiersInside--;
    }
}
