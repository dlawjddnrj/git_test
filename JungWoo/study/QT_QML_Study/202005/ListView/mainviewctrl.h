#ifndef MAINVIEWCTRL_H
#define MAINVIEWCTRL_H

#include <QObject>
#include "mainview.h"

class MainViewCtrl : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int num READ getnum WRITE setnum NOTIFY numchanged)
    Q_PROPERTY(QString str READ getstr WRITE setstr NOTIFY strEmit)
public:
    MainViewCtrl();
    MainView* getViewPtr();

    int getnum() const;
    void setnum(const int &);

    QString getstr() const;
    void setstr(const QString &);

private:
    MainView *m_pMainView;

    int m_NumValue;
    QString m_StrValue;

signals:
    void numchanged();
    void strEmit();
};

#endif // MAINVIEWCTRL_H
