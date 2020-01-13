#include "jungwoo.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtDebug>
#include <QMap>
#include <QSet>

jungwoo::jungwoo(QObject* obj) : jw_(obj) { }

jungwoo::~jungwoo() { }

void jungwoo::cppSlots(QVariant var)
{
    /*
    jw_->setProperty("text", QVariant(var));
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
        jw_->setProperty("text", QVariant(iter.value()));
        iter = mapJungWoo.find(20);
    }

    if(iter != mapJungWoo.end()) {
        qDebug() << "Key 20 Value : " << iter.value();
        jw_->setProperty("text", QVariant(iter.value()));
    }

    qDebug() << mapJungWoo;

    QSet<int> setJungWoo;

    setJungWoo.insert(10);
    setJungWoo.insert(20);
    setJungWoo.insert(30);
    setJungWoo.insert(40);
    setJungWoo.insert(50);
    setJungWoo.insert(60);
    setJungWoo.insert(25);
    setJungWoo.insert(15);

    QSet<int>::iterator iter_;

    for(iter_ = setJungWoo.begin(); iter_ != setJungWoo.end(); iter_++) {
        qDebug() << *iter_;
    }

    qDebug() << setJungWoo;

    if(setJungWoo.contains(20)) {
        qDebug() << "Find set value 20!";
    }

//    while(i != setJungWoo.constEnd()) {
//        qDebug() << "is QSet All Value" << *i;
//        ++i;
//    } */

    bool a = true;
    QString Qstr = "hi!";
    QString version = "The current version is 0.1";

    // 절대로 이렇게 쓰면 안됨 혼남 12번씩 혼남 < emit으로 전달하는 방법을 찾아보자 >
    QObject * textrect = jw_->findChild<QObject*>("resultText");

    if(!var.toInt()) {
        QString re = "input not is Menu choice !";
        textrect->setProperty("text", re);
    }

    int choice = var.toInt();

    if(choice <= 3) {
        switch (choice) {
        case choice1 :
            textrect->setProperty("text", version);
            choice = NULL;
            break;

        case choice2:
            textrect->setProperty("text", a);
            choice = NULL;
            break;

        case choice3:
            QCoreApplication::exit();
            break;
        }
    } else {
        textrect->setProperty("text", "error!!");
    }

    Computer::cppComputer(a, Qstr, version);
}

Computer::Computer(bool p, QString t, QString v)
    : power(p), text(t), ver(v)
{
    qDebug() << "Create power : " << power;
    qDebug() << "Create text : " << text;
    qDebug() << "Create version : " << ver;
}

Computer::~Computer()
{ }

void Computer::cppComputer(QVariant power_, QVariant text_, QVariant ver_)
{
    Computer c(false, "jungwoo", "0.2");
    qDebug() << c.power << c.text << c.ver;
    qDebug() << power_ << text_ << ver_;
}
