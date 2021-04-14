#ifndef CONNECTEVENT_H
#define CONNECTEVENT_

#include <QQuickView>
#include <QObject>
#include <iostream>
using namespace std;

struct TestStruct{
    QString title = "";
    QString ButtonText = "";
    QString Infomation = "";
};

class ConnectEvent : public QObject//connection을 사용하기 위해 상속 받아야 하는 클래스
{
public:
    Q_OBJECT
public:
    ConnectEvent();
    ~ConnectEvent();

    void setWindow(QQuickWindow* Window);

    void setTestList();
    Q_INVOKABLE int getListSize();
    Q_INVOKABLE QString getListTitle(int index);
    Q_INVOKABLE QString getListButtonText(int index);
    Q_INVOKABLE QString getListInfomation(int index);
    Q_INVOKABLE void deleteListItem(int index);

private:

    QQuickWindow* mMainView;
    vector<TestStruct> mTestList;
};

#endif // CONNECTEVENT_H
