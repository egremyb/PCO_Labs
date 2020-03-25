#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QString>
#include <QVector>
#include <pcosynchro/pcomutex.h>
#include "threadmanager.h"

/**
 * Initialise les paramètres des threads.
 * @param charset Liste de charactères à tester pour le brute force.
 * @param salt Sel à utiliser sur la génération des hashs.
 * @param hash Hash recherché.
 * @param nbChars Nombre de charactères dont le mot de passe d'origine est composé.
 */
void initialize(QString& charset, QString& salt, QString& hash, unsigned int& nbChars);

/**
 * Exécute le brute force.
 * @param startingPasswordState État de départ où les charactères du mot de passe s'incrémentent.
 * @param nbToCompute Nombre de mot de passe à tester.
 * @param tm Pointeur sur le manageur de threads (Thread Manager).
 */
void startBruteForce(QVector<unsigned int> startingPasswordState,
                     const unsigned int& nbToCompute,
                     ThreadManager* tm);

/**
 * Retourne la solution.
 * @return La solution sous forme de string. Retourne "" si aucune solution trouvée.
 */
QString getSolution();

#endif // MYTHREAD_H
