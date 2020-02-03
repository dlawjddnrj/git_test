#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QVariant>

class car : public QObject
{
    Q_OBJECT
public:
    car(QObject* car_);
    QObject* car__;
    ~car();
    int carIndex = 0;

public slots:
    void cppSlot(QVariant var);

protected:
    bool startup(bool startup);
    void accelerator(bool startup);
    void Break();
};

class SuperCar : public car
{
    Q_OBJECT
public:
    SuperCar();
    ~SuperCar();
};

#endif // CAR_H
