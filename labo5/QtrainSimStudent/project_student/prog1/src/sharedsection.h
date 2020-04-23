//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteurs : Nom Prénom, Nom Prénom
//
#ifndef SHAREDSECTION_H
#define SHAREDSECTION_H

#include <QDebug>

#include <pcosynchro/pcosemaphore.h>

#include "locomotive.h"
#include "ctrain_handler.h"
#include "sharedsectioninterface.h"

/**
 * @brief La classe SharedSection implémente l'interface SharedSectionInterface qui
 * propose les méthodes liées à la section partagée.
 */
class SharedSection final : public SharedSectionInterface
{
public:

    /**
     * @brief SharedSection Constructeur de la classe qui représente la section partagée.
     * Initialisez vos éventuels attributs ici, sémaphores etc.
     */
    SharedSection() : sectionOccupied(0), acceptedLocomotive(-1) { }

    /**
     * @brief request Méthode a appeler pour indiquer que la locomotive désire accéder à la
     * section partagée (deux contacts avant la section partagée).
     * @param loco La locomotive qui désire accéder
     * @param priority La priorité de la locomotive qui fait l'appel
     */
    void request(Locomotive& loco, Priority priority) override {

        // test flag occupied
        // Changement du flag occupied

        // Vérifie  si la section partagé est occupée
        mutexSectionOccupied.acquire();
        if (sectionOccupied ==  1) {
            mutexSectionOccupied.release();

            // Message dans la console globale
            //afficher_message(qPrintable(QString("The engine no. %1 waits for access to the shared section.").arg(loco.numero())));

        } else {
            // Indique que la voie est à présent occupée puis continue son chemin sur celle-ci
            sectionOccupied = 1;
            mutexSectionOccupied.release();

            mutexAcceptedLocomotive.acquire();
            acceptedLocomotive = loco.numero();
            mutexAcceptedLocomotive.release();
        }


        // Message dans la console globale
        afficher_message(qPrintable(QString("The engine no. %1 requested the shared section.").arg(loco.numero())));
    }

    /**
     * @brief getAccess Méthode à appeler pour accéder à la section partagée, doit arrêter la
     * locomotive et mettre son thread en attente si la section est occupée ou va être occupée
     * par une locomotive de plus haute priorité. Si la locomotive et son thread ont été mis en
     * attente, le thread doit être reveillé lorsque la section partagée est à nouveau libre et
     * la locomotive redémarée. (méthode à appeler un contact avant la section partagée).
     * @param loco La locomotive qui essaie accéder à la section partagée
     * @param priority La priorité de la locomotive qui fait l'appel
     */
    void getAccess(Locomotive &loco, Priority priority) override {
        // Vérifie si la locomotive appelante est accepté
        mutexAcceptedLocomotive.acquire();
        if(loco.numero() != acceptedLocomotive){
            mutexAcceptedLocomotive.release();
            // Arrête la locomotive et attend de pouvoir acceder à la section
            loco.arreter();
            mutexSharedSection.acquire();
            // Indique que la locomotive appelante est à présent acceptée
            mutexAcceptedLocomotive.acquire();
            acceptedLocomotive = loco.numero();
            mutexAcceptedLocomotive.release();
            // Indique que la section partagée est à présent occupée puis redémarre
            mutexSectionOccupied.acquire();
            sectionOccupied = 1;
            mutexSectionOccupied.release();
            loco.demarrer();
        } else {
            // La locomotive acceptée continue sa route
            mutexAcceptedLocomotive.release();
            mutexSharedSection.acquire();
        }

        // Message dans la console globale
        afficher_message(qPrintable(QString("The engine no. %1 accesses the shared section.").arg(loco.numero())));
    }

    /**
     * @brief leave Méthode à appeler pour indiquer que la locomotive est sortie de la section
     * partagée. (reveille les threads des locomotives potentiellement en attente).
     * @param loco La locomotive qui quitte la section partagée
     */
    void leave(Locomotive& loco) override {
        // Libère la  voie
        mutexSharedSection.release();
        // Indique que la voie est à présent libre
        mutexSectionOccupied.acquire();
        sectionOccupied = 0;
        mutexSectionOccupied.release();
        //
        mutexAcceptedLocomotive.acquire();
        acceptedLocomotive = -1;
        mutexAcceptedLocomotive.release();

        // Message dans la console globale
        afficher_message(qPrintable(QString("The engine no. %1 leaves the shared section.").arg(loco.numero())));
    }

    /* A vous d'ajouter ce qu'il vous faut */

private:
    // Méthodes privées ...
    // Attributes privés ...

    int          sectionOccupied;
    int          acceptedLocomotive;

    PcoSemaphore mutexSectionOccupied    = PcoSemaphore(1);
    PcoSemaphore mutexAcceptedLocomotive = PcoSemaphore(1);
    PcoSemaphore mutexSharedSection      = PcoSemaphore(1);
};


#endif // SHAREDSECTION_H
