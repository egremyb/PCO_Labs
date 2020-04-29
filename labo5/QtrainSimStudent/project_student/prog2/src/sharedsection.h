//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteurs : Arthur Bécaud et Bruno Egremy
//
#ifndef SHAREDSECTION_H
#define SHAREDSECTION_H

#include <QDebug>
#include <pcosynchro/pcosemaphore.h>
#include <string>

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
    SharedSection() : sectionOccupied(0) { }

    /**
     * @brief request Méthode a appeler pour indiquer que la locomotive désire accéder à la
     * section partagée (deux contacts avant la section partagée).
     * @param loco La locomotive qui désire accéder
     * @param priority La priorité de la locomotive qui fait l'appel
     */
    void request(Locomotive& loco, Priority priority) override {

        // Ajoute la locomotive à la queue d'accès
        switch (priority) {
            case Priority::LowPriority:
                accessLowPriority.push(&loco);
                break;
            case Priority::HighPriority:
                accessHighPriority.push(&loco);
                break;
            default:
                break;
        }

        afficher_message(qPrintable(QString("The engine no. %1 has requested access to the shared section.").arg(loco.numero())));
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

        bool isStopped = false;
        bool accessible = false;

        // Vérifie si la locomotive peut accéder la section partagée
        while (!accessible) {
            // Vérifie si la section est occupée
            mutexSectionOccupied.acquire();
            if (sectionOccupied == 0) {

                // Vérifie les FIFO d'accès selon la prioritée la loco courante
                mutexAccessHighPriority.acquire();
                switch (priority) {
                    case Priority::LowPriority:
                        // Vérifie si la FIFO haute priorité est vide
                        if (accessHighPriority.empty() == true) {
                            // Vérifie si la tête de la FIFO basse priorité correspond à la loco courante
                            mutexAccessLowPriority.acquire();
                            if (accessLowPriority.front()->numero() == loco.numero()) {
                                accessible = true;
                            }
                            mutexAccessLowPriority.release();
                        }
                        break;
                    case Priority::HighPriority:
                        // Vérifie si la tête de la FIFO haute priorité correspond à la loco courante
                        if (accessHighPriority.front()->numero() == loco.numero()) {
                            accessible = true;
                        }
                        break;
                    default:
                        break;
                }
                mutexAccessHighPriority.release();
            }
            mutexSectionOccupied.release();


            // Arrête la loco si elle est démarrée
            if (isStopped == false) {
                loco.arreter();
                isStopped = true;
                afficher_message(qPrintable(QString("The engine no. %1 stopped.").arg((loco.numero()))));
            }
        }

        // Indique que la section est maintenant occupée
        mutexSectionOccupied.acquire();
        sectionOccupied = 1;
        mutexSectionOccupied.release();

        switch (priority) {
            case Priority::LowPriority:
                accessLowPriority.pop();
                break;
            case Priority::HighPriority:
                accessHighPriority.pop();
                break;
            default:
                break;
        }

        // Redémarre la loco si elle est arretée
        if (isStopped == true) {
            loco.demarrer();
            afficher_message(qPrintable(QString("The engine no. %1 restarted.").arg((loco.numero()))));
        }

        afficher_message(qPrintable(QString("The engine no. %1 access the shared section.").arg((loco.numero()))));
    }

    /**
     * @brief leave Méthode à appeler pour indiquer que la locomotive est sortie de la section
     * partagée. (reveille les threads des locomotives potentiellement en attente).
     * @param loco La locomotive qui quitte la section partagée
     */
    void leave(Locomotive& loco) override {

        // Indique que la voie est à présent libre
        mutexSectionOccupied.acquire();
        sectionOccupied = 0;
        mutexSectionOccupied.release();

        afficher_message(qPrintable(QString("The engine no. %1 leaves the shared section.").arg(loco.numero())));
    }

private:
    int                     sectionOccupied;
    std::queue<Locomotive*> accessLowPriority;
    std::queue<Locomotive*> accessHighPriority;

    PcoSemaphore mutexSectionOccupied    = PcoSemaphore(1);
    PcoSemaphore mutexAccessLowPriority  = PcoSemaphore(1);
    PcoSemaphore mutexAccessHighPriority = PcoSemaphore(1);
    PcoSemaphore mutexAcceptedLocomotive = PcoSemaphore(1);
    PcoSemaphore mutexSharedSection      = PcoSemaphore(1);
};


#endif // SHAREDSECTION_H
