#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QString>
#include <QVector>
#include <pcosynchro/pcomutex.h>

class MyThread{
private :
    QString _charset;
    QString _salt;
    QString _hash;
    unsigned int _nbChars;
    unsigned int _isFound;
    QString _solution;

    QString getCharset();
    QString getSalt();
    QString getHash();
    unsigned int getNbChars();
    unsigned int getIsFound();
    void setIsFound(unsigned int isFound);
    void setSolution(QString solution);

    void indexToChar(QString* passwordString, QVector<unsigned int>* passwordArray);

public:
    MyThread(QString charset, QString salt, QString hash, unsigned int nbChars);
    QString getSolution();
    void startBruteForce(QVector<unsigned int> startingPasswordState, unsigned int nbToCompute, void (*updateLoadingBar) (double));
};


#endif // MYTHREAD_H
