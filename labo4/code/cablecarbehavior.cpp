//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteurs : Arthur Bécaud, Bruno Egremy

#include "cablecarbehavior.h"

void CableCarBehavior::run()
{
    // Monte des skieurs en haut de la montagne
    // tant que la télécabine est en service
    while(cableCar->isInService()) {
        // Charge les skieurs dans le télécabine
        cableCar->loadSkiers();
        // Décharge les skieurs si le fonctionnaire a terminé ses horaires
        if (cableCar->isInService() == false) {
            cableCar->unloadSkiers();
            break;
        }
        // si vide -> attente x secondes
        // Monte et décharge les skieurs en haut de la montagne
        cableCar->goUp();
        cableCar->unloadSkiers();
        // Redescend pour recommencer la boucle
        cableCar->goDown();
    }
}
