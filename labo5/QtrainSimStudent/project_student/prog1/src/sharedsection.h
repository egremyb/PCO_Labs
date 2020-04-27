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

        afficher_message(qPrintable(QString("The engine no. %1 request.").arg(loco.numero())));

        // Vérifie  si la section partagé est occupée
        mutexSectionOccupied.acquire();
        if (sectionOccupied == 1) {
            mutexSectionOccupied.release();

            afficher_message(qPrintable(QString("The engine no. %1 stop.").arg(loco.numero())));

            loco.arreter();
            mutexSharedSection.acquire();
            loco.demarrer();

            afficher_message(qPrintable(QString("The engine no. %1 restart.").arg(loco.numero())));

            mutexSectionOccupied.acquire();
            sectionOccupied = 1;
            mutexSectionOccupied.release();

        } else {
            // Indique que la voie est à présent occupée puis continue son chemin sur celle-ci
            sectionOccupied = 1;
            mutexSectionOccupied.release();

            mutexSharedSection.acquire();
        }

        afficher_message(qPrintable(QString("The engine no. %1 will access the section.").arg(loco.numero())));
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
        afficher_message(qPrintable(QString("The engine no. %1 access the shared section.").arg((loco.numero()))));
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
