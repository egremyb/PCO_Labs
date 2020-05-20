//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteurs : Arthur Bécaud et Bruno Egremy
//
#include "locomotivebehavior.h"
#include "ctrain_handler.h"

void LocomotiveBehavior::run()
{
    // Initialisation de la locomotive
    loco.allumerPhares();
    loco.demarrer();
    loco.afficherMessage("Ready!");

    // Fait avancer la locomotive à l'infini
    while (true) {
        // Réalise deux tours de la locomotive dans le sens horaire
        for (int i = 0; i < 1; i++) {
            lapManagement(start, forwardContacts[0], forwardContacts[0], backwardContacts[1], forwardPoints[0], forwardPoints[1], backwardPoints[0], backwardPoints[1]);
        }
        // Inverse le sens de la locomotive
        loco.inverserSens();
        // Réalise deux tours de la locomotive dans le sens anti-horaire
        for (int i = 0; i < 1; i++) {
            lapManagement(start, backwardContacts[0], backwardContacts[0], forwardContacts[1], backwardPoints[0], backwardPoints[1], forwardPoints[0], forwardPoints[1]);
        }
        // Inverse le sens de la locomotive
        loco.inverserSens();
    }
}

void LocomotiveBehavior::lapManagement(unsigned startContact, unsigned requestContact, unsigned accessContact, unsigned leaveContact, unsigned entryPoint, unsigned entryPosition, unsigned leavePoint, unsigned leavePosition) {
    // Attend que la locomotive atteigne le contact de requête (pas néscéssaire donc pas utilisée)
    // attendre_contact(requestContact);
    // sharedSection->request(loco, (SharedSectionInterface::Priority) 0);
    // Attend que la locomotive atteigne le contact d'accès à la section partagée
    attendre_contact(accessContact);
    sharedSection->getAccess(loco, (SharedSectionInterface::Priority) 0);
    // Redirige les deux aiguillage de la section partagée
    diriger_aiguillage(entryPoint, entryPosition, 0);
    diriger_aiguillage(leavePoint, leavePosition, 0);
    // Attend que la locomotive sorte de la section puis informe sa sortie
    attendre_contact(leaveContact);
    sharedSection->leave(loco);
    // Attend que la locomotive retourne au point de départ
    attendre_contact(startContact);
}

void LocomotiveBehavior::printStartMessage()
{
    qDebug() << "[START] Thread de la loco" << loco.numero() << "lancé";
    loco.afficherMessage("Je suis lancée !");
}

void LocomotiveBehavior::printCompletionMessage()
{
    qDebug() << "[STOP] Thread de la loco" << loco.numero() << "a terminé correctement";
    loco.afficherMessage("J'ai terminé");
}
