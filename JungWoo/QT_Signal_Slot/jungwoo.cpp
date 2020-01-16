#include "jungwoo.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtDebug>
#include <QMap>
#include <QSet>
#include <QList>
#include <time.h>

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
    QString version = "The current version is 0.2";

    // 절대로 이렇게 쓰면 안됨 혼남 12번씩 혼남 < emit으로 전달하는 방법을 찾아보자 >
    QObject * textrect = jw_->findChild<QObject*>("resultText");
    QObject * calrect = jw_->findChild<QObject*>("rectangle");

    QString re = "input not is Menu choice !";

    if(!var.toInt()) {
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
            textrect->setProperty("text", "");
            calrect->setProperty("visible", true);
            choice = NULL;
            break;

        case choice3:
            QCoreApplication::exit();
            break;
        }
    } else {
        textrect->setProperty("text", re);
    }

    Computer::cppComputer(a, Qstr, version);
}

void jungwoo::button_objnum0()
{
    QObject * text = jw_->findChild<QObject*>("fristtext");
    text->setProperty("text", "0");
}

//void jungwoo::button_objnum1()
//{
//    QObject * text = jw_->findChild<QObject*>("fristtext");
//    text->setProperty("text", "1");
//}

//void jungwoo::button_objnum2()
//{
//    QObject * text = jw_->findChild<QObject*>("fristtext");
//    text->setProperty("text", "2");
//}

//void jungwoo::button_objnum3()
//{
//    QObject * text = jw_->findChild<QObject*>("fristtext");
//    text->setProperty("text", "3");
//}

//void jungwoo::button_objnum4()
//{
//    QObject * text = jw_->findChild<QObject*>("fristtext");
//    text->setProperty("text", "4");
//}

//void jungwoo::button_objnum5()
//{
//    QObject * text = jw_->findChild<QObject*>("fristtext");
//    text->setProperty("text", "5");
//}

//void jungwoo::button_objnum6()
//{
//    QObject * text = jw_->findChild<QObject*>("fristtext");
//    text->setProperty("text", "6");
//}

//void jungwoo::button_objnum7()
//{
//    QObject * text = jw_->findChild<QObject*>("fristtext");
//    text->setProperty("text", "7");
//}

//void jungwoo::button_objnum8()
//{
//    QObject * text = jw_->findChild<QObject*>("fristtext");
//    text->setProperty("text", "8");
//}

//void jungwoo::button_objnum9()
//{
//    QObject * text = jw_->findChild<QObject*>("fristtext");
//    text->setProperty("text", "9");
//}


ConnectEvent::ConnectEvent() {
}
ConnectEvent::~ConnectEvent() { }

void ConnectEvent::cppSignaltoQmlSlot(QVariant a) {
/*    emit cppSignalTestData(3);
    emit cppSignalTestData("Hello");
    emit cppSignalTestData("Apple");
    emit cppSignalTestData(a);

    QList<QString> testListOne;
    QList<QString> testListTwo;
    QList<QString>::iterator iter;
    emit cppSignalTestData(a);

    clock_t start, end;
    double result;

    testListTwo.append("Hi");
    testListTwo.append("My name is");
    testListTwo.append("JungWoo");

    start = clock(); // 시간 측정 시작

    for(int i = 0; i < 100000; i++) {
//        testListOne.push_front(testListTwo.first());      // 1 = 3278, 2 = 3231, 3 = 3324, 4 = 3365, 5 = 3323, 6 = 3213, 7 = 3196, 8 = 3178, 9 = 3162, 10 = 3250
        // 평균 3252
        testListOne.prepend(testListTwo.first());           // 1 = 3233, 2 = 3198, 3 = 3214, 4 = 3213, 5 = 3368, 6 = 3379, 7 = 3317, 8 = 3319, 9 = 3363, 10 = 3232
        // 평균 3283.6
    }

    for(iter = testListOne.begin(); iter != testListOne.end(); iter++) {
        qDebug() << *iter;
    }
    end = clock();
   result = (double)(end - start);

   qDebug() << "push_front time : " << result; */

    // a가 String인지 int인지 검사 후 int이면 각 두개의 숫자를 더 받아와서 계산.
    int  temp = a.toInt();
    emit cppSignalTestData(a);
}

void ConnectEvent::setWindow(QObject *Window) {

    mMainView = Window;
    // cpp에서 qml로 신호 연결
    QObject::connect(this, SIGNAL(cppSignalTestData(QVariant)), mMainView, SLOT(qmlSlotTestData(QVariant)));

    // qml에서 cpp로 신호 연결
    QObject::connect(mMainView, SIGNAL(qmlSignal2(QVariant)), this, SLOT(cppSignaltoQmlSlot(QVariant)));

    // calcultor qml에서 cpp로 신호 보내기
    QObject::connect(mMainView, SIGNAL(calculator()), this, SLOT(button_objnum0()));

    // calcultor cpp에서 qml로 신호 보내기
    QObject::connect(this, SIGNAL(button_objnum0()), mMainView, SLOT(buttonClicked()));
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
    Computer c(false, "jungwoo", "0.3");
    qDebug() << c.power << c.text << c.ver;
    qDebug() << power_ << text_ << ver_;
}
