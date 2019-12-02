#include "rectangleclickevent.h"
#include <QString>
#include <QtDebug>
RectangleClickEvent::RectangleClickEvent()
{

}

void RectangleClickEvent::SetEngineAddress(QQmlApplicationEngine *engine)
{
    //main에서 class 를 생성후 engine의 주소를 받아옴
    m_engine = engine;
}

void RectangleClickEvent::onClicked(int a)
{
    //fistlabel objectname을 찾음
    QObject* firstlabeltext = m_engine->rootObjects().first()->findChild<QObject*>("first_label_text");

    //string.append 하면 char[]형태러처럼 인덱스 하나에 한 글자씩 들어감.
    //ex
    //string.append(1) = char[0] = 1;
    //string.append(2) = char[1] = 2;
    //string.append(3) = char[2] = 3;
    //string 에 들어간 총 data 는 123
    //string 형태로 저장
    //string 형태로 저장해야 누른 값 순서대로 표출하기 용이
    m_num.append(QString::number(a));

    //string to int 형변환 방법
    int stringchangeint = m_num.toInt();

    //firstlabeltext  text property에 data를 입력
    firstlabeltext->setProperty("text",stringchangeint);

    switch (a) {
    case 10:
        //연산자
        break;
    case 11:
        //결과값 =클릭
        break;
    default:
        break;
    }
}
