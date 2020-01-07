#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    QObject* rootQML = engine.rootObjects()[0];

    test jw(rootQML);

    QObject::connect(rootQML, SIGNAL(qmlSignal()), &jw, SLOT(cppSlots()));

    return app.exec();
}
