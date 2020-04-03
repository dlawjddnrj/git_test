#include "excel.h"
#include <QDebug>

excel::excel(QObject * a) : qml(a) { }

excel::~excel() { }

void excel::cppSlots() {
    qDebug() << "cpp slots to Click";
}
