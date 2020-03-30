//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteur : Rick Wertenbroek
// Rien à modifier ici en dehors des valeurs NB_SKIERS et CABLE_CAR_CAPACITY pour vos essais
// Vous pouvez aussi changer l'ordre de lancement des threads ou ajouter des délais aléatoires
// avant vos lancements etc. pour effectuer des tests.
//
// Modifications :
// Auteurs : Prénom Nom, Prénom Nom

#include <QDebug>

#include <vector>
#include <algorithm>

#include "pcocablecar.h"
#include "skierbehavior.h"
#include "cablecarbehavior.h"

constexpr unsigned int NB_SKIERS = 10;
constexpr unsigned int CABLE_CAR_CAPACITY = 5;

int main()
{
    qDebug() << "Démarrage de la simulation de skieurs et télécabine ...";
    qDebug() << "Nombre de skieurs :" << NB_SKIERS;
    qDebug() << "Capacité du télécabine :" << CABLE_CAR_CAPACITY;
    qDebug() << "Appuyez sur ENTER pour terminer\n";

    // Création du télécabine
    std::shared_ptr<CableCar> cableCar = std::make_shared<PcoCableCar>(CABLE_CAR_CAPACITY);

    // Création des tâches pour le comportement du télécabine et des skieurs
    std::vector<std::unique_ptr<Launchable>> threads(0);

    // Création de la tâche télécabine
    threads.push_back(std::make_unique<CableCarBehavior>(cableCar));

    // Création des tâches skieurs
    for (unsigned int i = 0; i < NB_SKIERS; ++i) {
        threads.push_back(std::make_unique<SkierBehavior>(cableCar));
    }

    // Mélange des tâches afin d'avoir un démarrage dans un ordre aléatoire
    std::random_shuffle(std::begin(threads), std::end(threads));

    // Démarrage des threads
    for (auto& thread : threads) {
        thread->startThread();
    }

    // Attente d'une entrée utilisateur
    QTextStream qin(stdin);
    QString Line = qin.readLine();

    // Fin de service
    cableCar->endService();

    // Attendre la fin des threads
    for (auto& thread : threads) {
        thread->join();
    }

    return EXIT_SUCCESS;
}
