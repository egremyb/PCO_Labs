//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteurs : Arthur Bécaud et Bruno Egremy
//
#ifndef LOCOMOTIVEBEHAVIOR_H
#define LOCOMOTIVEBEHAVIOR_H

#include "locomotive.h"
#include "launchable.h"
#include "sharedsectioninterface.h"
#include "ctrain_handler.h"

/**
 * @brief La classe LocomotiveBehavior représente le comportement d'une locomotive
 */
class LocomotiveBehavior : public Launchable
{
public:
    /*!
     * \brief locomotiveBehavior Constructeur de la classe
     * \param loco la locomotive dont on représente le comportement
     */
    LocomotiveBehavior(Locomotive& loco,
                       std::shared_ptr<SharedSectionInterface> sharedSection,
                       unsigned start,
                       unsigned forwardContacts[],
                       unsigned forwardLeaveContact,
                       unsigned backwardContacts[],
                       unsigned backwardLeaveContact,
                       unsigned forwardPoints[],
                       unsigned backwardPoints[]) :
        loco(loco), sharedSection(sharedSection), start(start),
        forwardLeaveContact(forwardLeaveContact), backwardLeaveContact(backwardLeaveContact) {
        // Copie les contacts
        this->forwardContacts[0]  = forwardContacts[0];
        this->forwardContacts[1]  = forwardContacts[1];
        this->backwardContacts[0] = backwardContacts[0];
        this->backwardContacts[1] = backwardContacts[1];
        // Copie les aiguillages
        this->forwardPoints[0]    = forwardPoints[0];
        this->forwardPoints[1]    = forwardPoints[1];
        this->backwardPoints[0]   = backwardPoints[0];
        this->backwardPoints[1]   = backwardPoints[1];
    }

protected:
    /*!
     * \brief run Fonction lancée par le thread, représente le comportement de la locomotive
     */
    void run() override;

    /*!
     * \brief printStartMessage Message affiché lors du démarrage du thread
     */
    void printStartMessage() override;

    /*!
     * \brief printCompletionMessage Message affiché lorsque le thread a terminé
     */
    void printCompletionMessage() override;

    /**
     * @brief loco La locomotive dont on représente le comportement
     */
    Locomotive& loco;

    /**
     * @brief sharedSection Pointeur sur la section partagée
     */
    std::shared_ptr<SharedSectionInterface> sharedSection;

    /**
     * @brief start Numéro de contact où commence la locomotive
     */
    unsigned start;

    /**
     * @brief forwardContacts Tableau contenant les numéros de contacts pour la requête et l'acceptation en entrée de la section partagée
     */
    unsigned forwardContacts[2];

    /**
     * @brief forwardLeaveContact Numéro de contact où locomotive est considéré en dehors de la section partagée dans le sens horaire
     */
    unsigned forwardLeaveContact;

    /**
     * @brief backwardContacts Tableau contenant les numéros de contacts pour la requête et l'acceptation en sortie de la section partagée
     */
    unsigned backwardContacts[2];

    /**
     * @brief backwardLeaveContact Numéro de contact où locomotive est considéré en dehors de la section partagée dans le sens anti-horaire
     */
    unsigned  backwardLeaveContact;

    /**
     * @brief inverse Indicateur si forwardContacts[] et backwardContacts[] doivent être inversés
     */
    unsigned inverse;

    /**
     * @brief forwardPoints TODO
     */
    unsigned forwardPoints[2];

    /**
     * @brief backwardPoints TODO
     */
    unsigned backwardPoints[2];

private:
    /**
     * @brief lapManagement
     * @param start
     * @param requestContact
     * @param accessContact
     * @param leaveContact
     * @param entryPoint
     * @param entryPosition
     * @param leavePoint
     * @param leavePosition
     */
    void lapManagement(unsigned startContact, unsigned requestContact, unsigned accessContact, unsigned leaveContact, unsigned entryPoint, unsigned entryPosition, unsigned leavePoint, unsigned leavePosition);
};

#endif // LOCOMOTIVEBEHAVIOR_H
