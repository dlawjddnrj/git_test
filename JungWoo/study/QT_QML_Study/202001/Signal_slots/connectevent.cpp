#include "connectevent.h"

ConnectEvent::ConnectEvent()
{

}

ConnectEvent::~ConnectEvent()
{

}

void ConnectEvent::cppSignaltoQmlSlot()
{
    // 시그널과 슬롯을 연결해주는 connection
    QObject::connect(this, SIGNAL(cppSignaltestData(QVariant)), mMainView, SLOT(qmlSlotTestData(QVariant)));

    emit cppSignaltestData(3);       // cpp에서 시그널을 호출하는 부분 매개변수에 3을 넣어서 3이 qml 함수에 전달됨
    emit cppSignaltestData(4);
    emit cppSignaltestData(5);
    emit cppSignaltestData(6);
}

void ConnectEvent::setWindow(QQuickWindow *Window)
{
    mMainView = Window;     // connection을 해주기 위해 윈도우를 등록

    cppSignaltoQmlSlot();   // 윈도우 등록과 동시에 connection 등록
}
