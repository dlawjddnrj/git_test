#include "jungwoo.h"
#include <QDebug>
#include <cstdlib>


jungwoo::jungwoo(QObject* JW) :
    lim(JW) {
    qDebug() << "Create!";
}

jungwoo::~jungwoo() {
    qDebug() << "X !!";
}

void jungwoo::inputLottoNumber() {
    qDebug() << "input num = 1";
}
