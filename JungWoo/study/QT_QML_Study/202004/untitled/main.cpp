#include <QGuiApplication>
#include <QMetaObject>
#include <QQmlApplicationEngine>
#include <QQuickItem>

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

    QObject* rootObject = engine.rootObjects().first();

    QObject* mOne = Q_NULLPTR;

    if(rootObject != Q_NULLPTR)
    {
        mOne = rootObject->findChild<QObject*>("objectName");
    }

    if(mOne != Q_NULLPTR)
    {
        QMetaObject::invokeMethod(mOne, "jwobject", Qt::DirectConnection);
    }


    return app.exec();
}
