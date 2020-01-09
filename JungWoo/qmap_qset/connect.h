#ifndef CONNECT_H
#define CONNECT_H

#include <QVariant>
#include <QObject>
#include <iostream>
using namespace std;

class connect : public QObject
{
    Q_OBJECT
public:   
    connect();
    QObject* qml_connect;    
    ~connect();
public slots:
    void cppFunc(QVariant stringData);
};

#endif // CONNECT_H
