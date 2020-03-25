#include "mythread.h"
#include <QCryptographicHash>
#include <stdexcept>
#include <iostream>

using namespace std;

/* private */

static QString      _charset;
static QString      _salt;
static QString      _hash;
static unsigned int _nbChars;
static unsigned int _isFound;
static unsigned int _nbThreads;
static QString      _solution;

/**
 * Converti un vector de unsigned int vers un string.
 * @param passwordString String acueillant la solution (SA TAILLE DOIT ÊTRE ÉGAL À passwordArray!).
 * @param passwordArray  Tableau de unsigned int à convertir.
 */
void indexToChar(QString& passwordString, QVector<unsigned int>& passwordArray) {
    if((unsigned int)passwordArray.size() != _nbChars || (unsigned int)passwordString.size() != _nbChars){
        throw out_of_range("Tailles des tableaux différentes du nombre de caractères recherchés.");
    }

    for (unsigned int i = 0; i < _nbChars; i++){
        passwordString[i] = _charset.at(passwordArray.at(i));
    }
}

/* public */

void initialize(QString& charset, QString& salt, QString& hash, unsigned int& nbChars) {
    _charset   = charset;
    _salt      = salt;
    _hash      = hash;
    _nbChars   = nbChars;
    _isFound   = false;
    _nbThreads = 0;
    _solution  = "";
};

void startBruteForce(QVector<unsigned int> currentPasswordArray,
                     const unsigned int&   nbToCompute,
                     ThreadManager*        tm) {

    static PcoMutex    mutexIncrementPercent;
    static PcoMutex    mutexIncrementThreads;

    QCryptographicHash md5(QCryptographicHash::Md5);
    QString            currentHash;
    QString            currentPasswordString;

    unsigned int i;
    unsigned int nbComputed = 0;
    unsigned int nbValidChars = _charset.length();

    // Incremente le nombre de threads
    mutexIncrementThreads.lock();
    _nbThreads++;
    mutexIncrementThreads.unlock();

    // Définit le currentPasswordString de départ
    currentPasswordString.fill('.', currentPasswordArray.length());
    indexToChar(currentPasswordString, currentPasswordArray);

    // Tant qu'un autre thread n'a pas trouvé ou que le thread actuel n'a pas tout essayé.
    while (_isFound == false && nbComputed < nbToCompute) {

        // On vide les données déjà ajoutées au générateur
        md5.reset();

        // On préfixe le mot de passe avec le sel
        md5.addData(_salt.toLatin1());
        md5.addData(currentPasswordString.toLatin1());

        // On calcul le hash
        currentHash = md5.result().toHex();

        // Si on a trouvé, on retourne le mot de passe courant (sans le sel)
        if (currentHash == _hash) {
            _isFound = true;
            _solution = currentPasswordString;
        }

        // Tous les 1000 hash calculés, on notifie qui veut bien entendre
        // de l'état de notre avancement (pour la barre de progression)
        if ((nbComputed % 1000) == 0) {
            mutexIncrementPercent.lock();
            tm->incrementPercentComputed((double) 1000 / (_nbThreads * nbToCompute));
            mutexIncrementPercent.unlock();
        }

        // On récupère le mot de passe à tester suivant.
        // L'opération se résume à incrémenter currentPasswordArray comme si
        // chaque élément de ce vecteur représentait un digit d'un nombre en
        // base nbValidChars.
        // Le digit de poids faible étant en position 0
        i = 0;
        while (i < (unsigned int)currentPasswordArray.size()) {
            currentPasswordArray[i]++;

            if (currentPasswordArray[i] >= nbValidChars) {
                currentPasswordArray[i] = 0;
                i++;
            } else
                break;
        }

        // On traduit les index présents dans currentPasswordArray en
        // caractères
        indexToChar(currentPasswordString, currentPasswordArray);

        ++nbComputed;
    }
    // Si on arrive ici, cela signifie que tous les mot de passe possibles ont
    // été testés, et qu'aucun n'est la préimage de ce hash.
    return;
}

QString getSolution() {
    return _solution;
}
