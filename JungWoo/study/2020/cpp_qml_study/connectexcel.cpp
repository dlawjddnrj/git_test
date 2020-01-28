#include "connectexcel.h"
#include <QDebug>
#include <QQmlApplicationEngine>

connectExcel::connectExcel(QObject* a) : mainQML(a) { }

connectExcel::~connectExcel() { }

void connectExcel::connectExcelQML()
{
    qDebug() << "connectExcel cpp function  !";
}
