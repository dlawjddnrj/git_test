#ifndef LISTCPP_H
#define LISTCPP_H

#include <QQuickView>
#include <QObject>
#include <iostream>
using namespace std;

struct tempStructList {
    QString title = "defalut title";
    QString infomation = "";
};

class listCpp : public QObject
{
    Q_OBJECT
public:
    listCpp();
    ~listCpp();
    void setWindow(QQuickWindow* Window);
    void setList();

    Q_INVOKABLE int getListSize();
    Q_INVOKABLE QString getListTitle(int index);
    Q_INVOKABLE QString getListInfomation(int index);
    Q_INVOKABLE void deleteListModel(int index);
    Q_INVOKABLE void swapModel(int n1, int n2);
    Q_INVOKABLE void checkState(int index, bool checked);

private:
    QQuickWindow* mMainView;
    vector<tempStructList> mList;
};

#endif // LISTCPP_H
