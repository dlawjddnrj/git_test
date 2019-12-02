#ifndef RECTANGLECLICKEVENT_H
#define RECTANGLECLICKEVENT_H

#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
class RectangleClickEvent : public QObject
{
    Q_OBJECT
public:
    RectangleClickEvent();
    QQmlApplicationEngine *m_engine;
    void SetEngineAddress(QQmlApplicationEngine *engine);
    QString m_num1;
    QString m_num2;
    QString m_num3;
public slots:
    void onClicked(int a);
};

#endif // RECTANGLECLICKEVENT_H
