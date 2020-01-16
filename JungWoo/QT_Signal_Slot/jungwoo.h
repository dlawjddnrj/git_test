#ifndef JUNGWOO_H
#define JUNGWOO_H

#include <QObject>
#include <QVariant>
#include <iostream>

using namespace std;

enum user {
    choice1 = 1,
    choice2,
    choice3
};

class jungwoo : public QObject
{
    Q_OBJECT
public:
    jungwoo(QObject* jw);
    QObject* jw_;
    ~jungwoo();

public slots:
    void cppSlots(QVariant var);
    void button_objnum0();
//    void button_objnum1();
//    void button_objnum2();
//    void button_objnum3();
//    void button_objnum4();
//    void button_objnum5();
//    void button_objnum6();
//    void button_objnum7();
//    void button_objnum8();
//    void button_objnum9();

};

class ConnectEvent : public QObject {
    Q_OBJECT

public:
    ConnectEvent();
    ~ConnectEvent();
public slots:
    void cppSignaltoQmlSlot(QVariant);

public:
    void setWindow(QObject* Window);
    QObject* mMainView;

signals:
    void cppSignalTestData(QVariant);
};

//class QPropertyTest : public QObject {
//    Q_OBJECT
//    Q_PROPERTY(bool testBoolean READ testBoolean WRITE setTestBoolean NOTIFY testBooleanChanged)

//private:
//    bool m_testBoolean;

//public:
//    QPropertyTest(QObject *parent = nullptr);
//    bool testBoolean();
//    void setTestBoolean(bool value);

//signals:
//    void testBooleanChanged(const bool value);
//};


class Computer
{
private:
    bool power;
    QString text;
    QString ver;
public:
    Computer(bool p, QString t, QString v);
    ~Computer();
    static void cppComputer(QVariant power_, QVariant text_, QVariant ver_);
};

#endif // JUNGWOO_H
