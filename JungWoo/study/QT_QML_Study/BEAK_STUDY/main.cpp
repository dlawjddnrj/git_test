#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtDebug>
#include "stuff.h"
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    Stuff stuff;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);


    engine.load(url);

    QObject * rectangle1 = engine.rootObjects().first()->findChild<QObject*>("baekrect");
    QObject * rectangle1mousearea = engine.rootObjects().first()->findChild<QObject*>("baekrectmousearea");
    QObject * rectanglerect = engine.rootObjects().first()->findChild<QObject*>("recttext");
    rectanglerect->setProperty("text","rel?");
    QObject::connect(rectangle1, SIGNAL(clicked()), &stuff, SLOT(onClicked()));
    rectangle1->setProperty("color","red");

    return app.exec();
}
