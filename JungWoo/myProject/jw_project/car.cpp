#include "car.h"
#include <QtDebug>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

car::car(QObject* obj) : car__(obj)
{

}

car::~car()
{

}

car::car() {
    qDebug() << "car 생성";
}

void car::cppSlot(QVariant var_)
{
    SuperCar rambo(PERSONNEL);

    int temp = var_.canConvert<int>() ? var_.toInt()  : var_ == 0;
    qDebug() << "Yeah!" << ", " << temp;

    QObject * car = car__->findChild<QObject*>("car");

    int xValue = 274;
    int yValue = 140;

    for(int i = 0; i < 5; i++) {
        car->setProperty("x", ++yValue);
    }
}

bool car::startup(bool startup_)
{
    if(startup_ == true) {
        return true;
    } else {
        return false;
    }
}

void car::accelerator(bool startup_)
{
    if(startup_ == true) {
//        ++carIndex;
    }
}

void car::Break()
{
//    --carIndex;
}

SuperCar::SuperCar(int personnel_) : personnel(personnel_) { }

SuperCar::~SuperCar()
{

}

void SuperCar::openDoor()
{

}

MyEnums::MyEnums(QObject *parent)
{

}
