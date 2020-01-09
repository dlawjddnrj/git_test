#ifndef JUNGWOO_H
#define JUNGWOO_H

#include <QObject>
#include <QVariant>
#include <iostream>
using namespace std;

enum user {
    choice1 = 1,
    choice2,
    choice3
};

class jungwoo : public QObject
{
    Q_OBJECT
public:
    jungwoo(QObject* jw);
    QObject* jw_;

public slots:
    void cppSlots(QVariant var);
};

class Computer
{
private:
    bool power;
    QString text;
    QString ver;
public:
    Computer(bool p, QString t, QString v);
    ~Computer();
    static void cppComputer(QVariant power_, QVariant text_, QVariant ver_);
};

#endif // JUNGWOO_H
