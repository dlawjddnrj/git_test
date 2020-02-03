#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "car.h"

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

    if(engine.rootObjects().isEmpty())
        return -1;

    QObject* engine_qml = engine.rootObjects().first();

    car car_(engine_qml);

    QObject::connect(engine.rootObjects().first(), SIGNAL(qmlSignal(QVariant)), &car_, SLOT(cppSlot(QVariant)));

    return app.exec();
}
