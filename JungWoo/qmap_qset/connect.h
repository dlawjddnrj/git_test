#ifndef CONNECT_H
#define CONNECT_H

#include <QVariant>
#include <QObject>
#include <iostream>
using namespace std;

class connect : public QObject
{
public:
    Q_OBJECT
    QObject* qml_connect;
    connect();
    ~connect();
public slots:
    void cppFunc(QVariant var);
};

#endif // CONNECT_H
