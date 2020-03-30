//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteur : Rick Wertenbroek
// Rien à modifier ici

#ifndef CABLECAR_H
#define CABLECAR_H

#include "cablecarskierinterface.h"
#include "cablecarinterface.h"

/*!
 * \brief La classe CableCar est une classe abstraite qui représente un télécabine
 */
class CableCar : public CableCarInterface, public CableCarSkierInterface
{
public:

    /*!
     * \brief Permet de mettre fin au service du télécabine
     */
    virtual void endService() = 0;
};

#endif // CABLECAR_H
