//#include <QGuiApplication>
//#include <QQmlApplicationEngine>
//beakkyoungku write
#include "rectangleclickevent.h"
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
    

    //beakkyoungku write

    // class 선언
    RectangleClickEvent RectangleClickEvent;

    //class 에 engine 주소를 넘겨줌 event가 넘어왔을때
    //class에서 engine qml을 컨트롤해 label에 text를 넣어주기 위함.
    //안전하게 호출 할 수 있도록 예외처리 및 rectasngleclickevent 에서 functioncall로 가져 올 수 있도록 하면 좋음
    RectangleClickEvent.SetEngineAddress(&engine);

    //배경화면에 해당하는 rectangle 에, obejctname을 주어, engine에서 cpp에서 찾을 수 있음
    QObject * rectangle = engine.rootObjects().first()->findChild<QObject*>("rectangle");

    //위에서 찾은 rectangle에서, qml에 등록한 signal과 rectangleclickevent에 clicked event를 연결 시켜줌
    //binding
    //SIGNAL    = qml의 signal
    //SLOT      = cpp의 slots 함수
    QObject::connect(rectangle, SIGNAL(clicked(int)), &RectangleClickEvent, SLOT(onClicked(int)));
    

    return app.exec();
}
