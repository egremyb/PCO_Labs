//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteur : Rick Wertenbroek
// Rien à modifier ici

#ifndef SKIERBEHAVIOR_H
#define SKIERBEHAVIOR_H

#include "launchable.h"
#include "cablecar.h"

/*!
 * \brief La classe SkierBehavior est une classe abstraite qui représente le comportement d'un skieur
 */
class SkierBehavior : public Launchable
{
public:
    /*!
     * \brief Constructeur de la classe PcoSkier, permet d'instancier un skieur
     * \param cableCar Pointeur sur le télécabine que le skieur utilise pour monter en haut de la montagne
     */
    SkierBehavior(std::shared_ptr<CableCarSkierInterface> cableCar) : id(nextId++), cableCar(cableCar) {}

    /*!
     * \brief Fonction lancée par le thread, représente le comportement du skieur
     */
    void run() override;

protected:
    /*!
     * \brief représente le fait que le skieur descend de la montage en ski
     */
    void goDownTheMountain();

    /*!
     * \brief Message affiché lors du démarrage du thread
     */
    void printStartMessage() override {qDebug() << "[START] Thread du skieur" << id << "lancé";}

    /*!
     * \brief Message affiché lorsque le thread a terminé
     */
    void printCompletionMessage() override {qDebug() << "[STOP] Thread du skieur" << id << "a terminé correctement";}

    /*!
     * \brief L'identificateur du skieur
     */
    const int id;

    /*!
     * \brief L'identificateur pour le prochain Skieur créé
     */
    static int nextId;

    /*!
     * \brief Le télécabine utilisée par le skieur
     */
    std::shared_ptr<CableCarSkierInterface> cableCar;
};

#endif // SKIERBEHAVIOR_H
