#include "jungwoo.h"
#include <QtDebug>
#include <QMap>
#include <QSet>

jungwoo::jungwoo(QObject* obj) : jw_(obj)
{

}

void jungwoo::cppSlots(QVariant var)
{
    qDebug() << var;
    int temp = var.canConvert<int>() ? var.toInt() + 1 : +0;
    qDebug() << temp;

    QMap <int, QString> mapJungWoo;

    mapJungWoo.insert(5, "Hi~");
    mapJungWoo.insert(4, "My Name Is Lim Jung Woo");
    mapJungWoo.insert(10, "Today is 01.08");
    mapJungWoo.insert(2, "Love");
    mapJungWoo.insert(7, "QT");

    mapJungWoo[20] = "last Value!";
    mapJungWoo[14] = "ivis";
    mapJungWoo[9] = "test";

    QMap <int, QString> :: iterator iter;

    qDebug() << "mapJungWoo First Value : " << mapJungWoo.first();

    iter = mapJungWoo.find(5);

    if(iter != mapJungWoo.end()) {
        qDebug() << "Key 5 Value : " << iter.value();
        iter = mapJungWoo.find(20);
    }

    if(iter != mapJungWoo.end()) {
        qDebug() << "Key 20 Value : " << iter.value();
    }

    for(iter = mapJungWoo.begin(); iter != mapJungWoo.end(); iter++) {
        qDebug() << "Key : " << iter.key() << " " << "Value : " << iter.value();
    }

    QSet<int> setJungWoo;

    setJungWoo.insert(10);
    setJungWoo.insert(50);


    QSet<int> :: iterator setIter;





}
