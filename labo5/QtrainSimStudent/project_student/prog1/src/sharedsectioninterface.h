//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteur : Rick Wertenbroek
// Rien à modifier ici

#ifndef SHAREDSECTIONINTERFACE_H
#define SHAREDSECTIONINTERFACE_H

#include "locomotive.h"

/**
 * @brief La classe SharedSectionInterface est une interface (classe abstraite pure) qui définit
 * trois méthodes, request, getAccess et leave afin de gérer l'accès à une section partagée d'un
 * parcours de locomotives.
 */
class SharedSectionInterface
{

public:

    /**
     * @brief An enum to represent the priority
     */
    enum class Priority {
        LowPriority,
        HighPriority
    };

    /**
     * @brief request Méthode a appeler pour indiquer que la locomotive désire accéder à la
     * section partagée (deux contacts avant la section partagée).
     * @param loco La locomotive qui désire accéder
     * @param priority La priorité de la locomotive qui fait l'appel
     */
    virtual void request(Locomotive& loco, Priority priority) = 0;

    /**
     * @brief getAccess Méthode à appeler pour accéder à la section partagée, doit arrêter la
     * locomotive et mettre son thread en attente si la section est occupée ou va être occupée
     * par une locomotive de plus haute priorité. Si la locomotive et son thread ont été mis en
     * attente, le thread doit être reveillé lorsque la section partagée est à nouveau libre et
     * la locomotive redémarée. (méthode à appeler un contact avant la section partagée).
     * @param loco La locomotive qui essaie accéder à la section partagée
     * @param highPriority La priorité de la locomotive qui fait l'appel
     */
    virtual void getAccess(Locomotive& loco, Priority priority) = 0;

    /**
     * @brief leave Méthode à appeler pour indiquer que la locomotive est sortie de la section
     * partagée. (reveille les threads des locomotives potentiellement en attente).
     * @param loco La locomotive qui quitte la section partagée
     */
    virtual void leave(Locomotive& loco) = 0;
};

#endif // SHAREDSECTIONINTERFACE_H
