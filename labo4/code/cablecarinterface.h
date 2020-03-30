//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteur : Rick Wertenbroek
// Rien à modifier ici

#ifndef CABLECARINTERFACE_H
#define CABLECARINTERFACE_H

/*!
 * \brief La classe CableCarInterface est une classe abstraite qui représente l'interface d'un
 * télécabine afin de modéliser son comportement. Cette interface propose des méthodes pour
 * affecter l'état du télécabine.
 */
class CableCarInterface
{
public:

    /*!
     * \brief Représente le fait que le télécabine monte
     */
    virtual void goUp() = 0;

    /*!
     * \brief Représente le fait que le télécabine descend
     */
    virtual void goDown() = 0;

    /*!
     * \brief Représente le fait que le télécabine charge des skieurs
     */
    virtual void loadSkiers() = 0;

    /*!
     * \brief Représente le fait que le télécabine décharge des skieurs
     */
    virtual void unloadSkiers() = 0;

    /*!
     * \brief Permet de savoir si le télécabine est en service
     * \return retourn vrai si le télécabine est en service
     */
    virtual bool isInService() = 0;
};

#endif // CABLECARINTERFACE_H
