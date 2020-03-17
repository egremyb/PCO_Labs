#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QString>
#include <QVector>
#include <pcosynchro/pcomutex.h>
#include "threadmanager.h"

class MyThread{
private :
    static QString _charset;
    static QString _salt;
    static QString _hash;
    static unsigned int _nbChars;
    static unsigned int _isFound;
    static QString _solution;

    static void setIsFound(unsigned int isFound);
    static void setSolution(QString solution);

    static void indexToChar(QString* passwordString, QVector<unsigned int>* passwordArray);

public:
    MyThread(QString charset, QString salt, QString hash, unsigned int nbChars);
    QString getSolution();
    static void startBruteForce(QVector<unsigned int> startingPasswordState, unsigned int nbToCompute, ThreadManager tm);
};


#endif // MYTHREAD_H
