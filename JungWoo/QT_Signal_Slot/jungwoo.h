#ifndef JUNGWOO_H
#define JUNGWOO_H

#include <QObject>
#include <QVariant>
#include <iostream>
using namespace std;

class jungwoo : public QObject
{
    Q_OBJECT
public:
    jungwoo(QObject* jw);
    QObject* jw_;

public slots:
    void cppSlots(QVariant var);
};

#endif // JUNGWOO_H
