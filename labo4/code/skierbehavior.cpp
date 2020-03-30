//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteurs : Arthur Bécaud, Bruno Egremy

#include "skierbehavior.h"

#include <QRandomGenerator>

constexpr unsigned int MIN_SECONDS_DELAY = 2;
constexpr unsigned int MAX_SECONDS_DELAY = 10;
constexpr unsigned int SECOND_IN_MICROSECONDS = 1000000;

int SkierBehavior::nextId = 1;

void SkierBehavior::run()
{
    // Monte avec le télécabine et descend
    // tant que le télécabine est en service
    while (cableCar->isInService()) {
        cableCar->waitForCableCar(id);
        // Vérifie que le télécabine soit encore en service
        if (cableCar->isInService() == false) {
            break;
        }
        // Monte dans le télécabine puis attend d'arriver en haut de la montagne
        cableCar->goIn(id);
        cableCar->waitInsideCableCar(id);
        cableCar->goOut(id);
        // Descend de la montagne en un temps aléatoire
        goDownTheMountain();
    }
}

void SkierBehavior::goDownTheMountain()
{
    qDebug() << "Skieur" << id << "est en train de skier et descend de la montagne";
    PcoThread::usleep((MIN_SECONDS_DELAY + QRandomGenerator::system()->bounded(MAX_SECONDS_DELAY + 1)) * SECOND_IN_MICROSECONDS);
    qDebug() << "Skieur" << id << "est arrivé en bas de la montagne";
}
