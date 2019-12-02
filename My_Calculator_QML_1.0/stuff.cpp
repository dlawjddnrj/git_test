#include "stuff.h"
#include <QtDebug>

Stuff::Stuff(QObject *parent) : QObject (parent)
{

}

void Stuff::onClicked()
{
    qDebug() << "Your Clicked Button !";
}
