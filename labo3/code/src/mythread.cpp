#include "mythread.h"
#include <QCryptographicHash>
#include <stdexcept>

using namespace std;

MyThread::MyThread(QString charset, QString salt, QString hash, unsigned int nbChars){
    this->_charset  = charset;
    this->_salt     = salt;
    this->_hash     = hash;
    this->_nbChars  = nbChars;
    this->_isFound  = false;
    this->_solution = "";
};

QString MyThread::getCharset(){
    return this->_charset;
}

QString MyThread::getSalt(){
    return this->_salt;
}

QString MyThread::getHash(){
    return this->_hash;
}

unsigned int MyThread::getNbChars(){
    return this->_nbChars;
}

unsigned int MyThread::getIsFound(){
    return this->_isFound;
}

void MyThread::setIsFound(unsigned int isFound){
    PcoMutex mutex;
    mutex.lock();
    this->_isFound = isFound;
    mutex.unlock();
}

void MyThread::setSolution(QString solution){
    PcoMutex mutex;
    mutex.lock();
    this->_solution= solution;
    mutex.unlock();
}

QString MyThread::getSolution(){
    return this->_solution;
}

void MyThread::indexToChar(QString* passwordString, QVector<unsigned int>* passwordArray){
    if((unsigned int)passwordArray->size() != getNbChars() || (unsigned int)passwordString->size() != getNbChars()){
        throw out_of_range("Tailles des tableaux différentes du nombre de caractères recherchés.");
    }

    for (unsigned int i = 0; i < getNbChars(); i++){
        passwordString[i] = getCharset().at(passwordArray->at(i));
    }
}

void MyThread::startBruteForce(QVector<unsigned int> currentPasswordArray, unsigned int nbToCompute, void (*updateLoadingBar) (double)){
    QCryptographicHash md5(QCryptographicHash::Md5);
    QString currentHash;
    QString currentPasswordString;

    unsigned int i;

    unsigned int nbComputed = 0;
    unsigned int nbValidChars = getCharset().length();

    currentPasswordString.resize(getNbChars());

    indexToChar(&currentPasswordString, &currentPasswordArray);

    /*
     * Tant qu'un autre thread n'a pas trouvé ou que le thread actuel n'a pas tout essayé.
     */
    while (getIsFound() == false && nbComputed < nbToCompute) {
        /* On vide les données déjà ajoutées au générateur */
        md5.reset();
        /* On préfixe le mot de passe avec le sel */
        md5.addData(getSalt().toLatin1());
        md5.addData(currentPasswordString.toLatin1());
        /* On calcul le hash */
        currentHash = md5.result().toHex();

        /*
         * Si on a trouvé, on retourne le mot de passe courant (sans le sel)
         */
        if (currentHash == getHash()){
            setIsFound(true);
            setSolution(currentPasswordString);
        }

        /*
         * Tous les 1000 hash calculés, on notifie qui veut bien entendre
         * de l'état de notre avancement (pour la barre de progression)
         */
        if ((nbComputed % 1000) == 0) {
            updateLoadingBar((double)1000/nbToCompute);
        }


        /*
         * On récupère le mot de passe à tester suivant.
         *
         * L'opération se résume à incrémenter currentPasswordArray comme si
         * chaque élément de ce vecteur représentait un digit d'un nombre en
         * base nbValidChars.
         *
         * Le digit de poids faible étant en position 0
         */
        i = 0;

        while (i < (unsigned int)currentPasswordArray.size()) {
            currentPasswordArray[i]++;

            if (currentPasswordArray[i] >= nbValidChars) {
                currentPasswordArray[i] = 0;
                i++;
            } else
                break;
        }

        /*
         * On traduit les index présents dans currentPasswordArray en
         * caractères
         */
        indexToChar(&currentPasswordString, &currentPasswordArray);

        nbComputed++;
    }
    /*
     * Si on arrive ici, cela signifie que tous les mot de passe possibles ont
     * été testés, et qu'aucun n'est la préimage de ce hash.
     */
    return;
}
