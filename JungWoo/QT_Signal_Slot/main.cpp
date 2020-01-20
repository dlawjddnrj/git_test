#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "jungwoo.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
//    QPropertyTest* propertyTest = new QPropertyTest;
//    engine.rootContext()->setContextProperty("propertyTest", propertyTest);
//    engine.rootContext();

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    ConnectEvent *event = new ConnectEvent();
    QObject *root = engine.rootObjects()[0];    // qrc:/main.qml을 등록한 엔진의 object값을 가져옴
//    event->setWindow(qobjectCast<QObject *>(root));
    if(engine.rootObjects().isEmpty())
        return -1;

    QObject* engine_qml = engine.rootObjects().first();

    jungwoo jw(engine_qml);

    QObject::connect(engine.rootObjects().first(), SIGNAL(qmlSignal(QVariant))
                     , &jw, SLOT(cppSlots(QVariant)));

    // calcultor qml에서 cpp로 신호 보내기
    QObject::connect(engine.rootObjects().first(), SIGNAL(calculatorNum0()), &jw, SLOT(button_objnum0()));
    QObject::connect(engine.rootObjects().first(), SIGNAL(calculatorNum1()), &jw, SLOT(button_objnum1()));
    QObject::connect(engine.rootObjects().first(), SIGNAL(calculatorNum2()), &jw, SLOT(button_objnum2()));
    QObject::connect(engine.rootObjects().first(), SIGNAL(calculatorNum3()), &jw, SLOT(button_objnum3()));
    QObject::connect(engine.rootObjects().first(), SIGNAL(calculatorNum4()), &jw, SLOT(button_objnum4()));
    QObject::connect(engine.rootObjects().first(), SIGNAL(calculatorNum5()), &jw, SLOT(button_objnum5()));
    QObject::connect(engine.rootObjects().first(), SIGNAL(calculatorNum6()), &jw, SLOT(button_objnum6()));
    QObject::connect(engine.rootObjects().first(), SIGNAL(calculatorNum7()), &jw, SLOT(button_objnum7()));
    QObject::connect(engine.rootObjects().first(), SIGNAL(calculatorNum8()), &jw, SLOT(button_objnum8()));
    QObject::connect(engine.rootObjects().first(), SIGNAL(calculatorNum9()), &jw, SLOT(button_objnum9()));

    QObject::connect(engine.rootObjects().first(), SIGNAL(clearbutton()), &jw, SLOT(button_objclear()));
    return app.exec();
}
