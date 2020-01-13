#ifndef CONNECTEVENT_H
#define CONNECTEVENT_H

#include <QQuickView>
#include <QObject>

class ConnectEvent:public QObject   // connection을 사용하기 위해 상속 받아야 하는 클래스
{
public:
    Q_OBJECT

public:
    ConnectEvent();
    ~ConnectEvent();

    void cppSignaltoQmlSlot();      // cpp에서 시그널을 날리고 qml에서 받기 위해 connection을 해두는 함수
    void setWindow(QQuickWindow * Window);

private:
    QQuickWindow * mMainView;

signals:        // 클래스에서 signal 등록하는 방법
    void cppSignaltestData(QVariant);
};

#endif // CONNECTEVENT_H
