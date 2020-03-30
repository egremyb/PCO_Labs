//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteurs : Prénom Nom, Prénom Nom

#include "skierbehavior.h"

#include <QRandomGenerator>

constexpr unsigned int MIN_SECONDS_DELAY = 2;
constexpr unsigned int MAX_SECONDS_DELAY = 10;
constexpr unsigned int SECOND_IN_MICROSECONDS = 1000000;

int SkierBehavior::nextId = 1;

void SkierBehavior::run()
{
    // A vous d'ajouter le comportement du skieur
}

void SkierBehavior::goDownTheMountain()
{
    qDebug() << "Skieur" << id << "est en train de skier et descend de la montagne";
    PcoThread::usleep((MIN_SECONDS_DELAY + QRandomGenerator::system()->bounded(MAX_SECONDS_DELAY + 1)) * SECOND_IN_MICROSECONDS);
    qDebug() << "Skieur" << id << "est arrivé en bas de la montagne";
}
