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

void car::cppSlot(QVariant var_)
{
    qDebug() << var_;

    int temp = var_.canConvert<int>() ? var_.toInt()  : var_ == 0;
    qDebug() << "Yeah!" << ", " << temp;
}

//void car::setWindow(QQuickWindow* Window) {
//    mMainView = Window;
//    cpp();
//}

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
        ++carIndex;
    }
}

void car::Break()
{
    --carIndex;
}

