#ifndef CAR_H
#define CAR_H

#define PERSONNEL 2

#include <QObject>
#include <QVariant>

class car : public QObject
{
    Q_OBJECT
public:
    car(QObject* car_);
    QObject* car__;
    ~car();

    car();

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
    SuperCar(int personnel_);
    ~SuperCar();

    void openDoor();

private:
    int personnel = 0;
};

class Passenger : public car
{
    Q_OBJECT
public:
    Passenger();
    ~Passenger();
};

#endif // CAR_H
