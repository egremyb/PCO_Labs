#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QString>
#include <QVector>
#include <pcosynchro/pcomutex.h>

class MyThread{
private :
    static QString _charset;
    static QString _salt;
    static QString _hash;
    static unsigned int _nbChars;
    static unsigned int _isFound;
    static QString _solution;

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
