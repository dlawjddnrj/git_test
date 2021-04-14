//#include <QGuiApplication>
//#include <QQmlApplicationEngine>
#include <iostream>
using namespace std;

//int main(int argc, char *argv[])
//{
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

//    QGuiApplication app(argc, argv);

//    QQmlApplicationEngine engine;
//    const QUrl url(QStringLiteral("qrc:/main.qml"));
//    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//                     &app, [url](QObject *obj, const QUrl &objUrl) {
//        if (!obj && url == objUrl)
//            QCoreApplication::exit(-1);
//    }, Qt::QueuedConnection);
//    engine.load(url);

//    return app.exec();
//}


//template <typename T>
//class Point
//{
//private:
//    T xpos, ypos;
//public:
//    Point(T x = 0, T y = 0) : xpos(x), ypos(y)
//    { }
//    void show() const
//    {
//        cout << '[' << xpos << ", " << ypos << ']' << endl;
//    }
//};

//template <typename JW>
//class SimpleTemplate
//{
//public:
//    JW SimpleFunc(const JW& ref);
//};

//template <typename JW>
//JW SimpleTemplate<JW>::SimpleFunc(const JW& ref)
//{
//    return ref;
//}

//template <typename T>
//T add (T a, T b)
//{
//    return a + b;
//}

//template<>
//double add(double a, double b)
//{
//    return a * a > b * b ? a : b;
//}

//int main(void)
//{
//    int num1 = 10, num2 = 20;
//    string a = "Lim", b = "JungWoo";
//    double d = 2.5;
//    int e = 10;

//    cout << add(num1, num2) << endl;
//    cout << add(a, b) << endl;
//    cout << add(d, 0.5) << endl;

//    Point <int> pos1(3, 4);
//    pos1.show();

//    Point<double> pos2 (2.4, 3.6);
//    pos2.show();

//    Point<string> pos3 ("Hi", "Hello");
//    pos3.show();
//}


int main(void)
{

}
