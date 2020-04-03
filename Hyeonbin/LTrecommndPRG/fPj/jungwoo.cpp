#include "jungwoo.h"
#include "myclass.h"
#include <QDebug>

jungwoo::jungwoo(QObject* JW) {
    qDebug() << "Create!";
}

jungwoo::~jungwoo() {
    qDebug() << "extinction !!";
}

QVariant jungwoo::return_randomvalue(QVariant random)
{
    // 값을 읽어올 순 있으나 형변환 후 if문을 사용하여 textEdit에 있는 text와 같은지 비교 후
    // 같으면 다시 onButtonClicked에 있는 for문을 실행하고 싶다.
    // 그럴려면 onButtonClicked에 있는 for문을 다른 함수로 만들어야 한다.

    qDebug() << random;
    int test = random.canConvert<int>() ? random.toInt() : 0;
    qDebug() << test;
    return 0;
}

//void jungwoo::inputLottoNumber(QVariant num) {
//    qDebug() << "Hello~" << num;

//    int N = num.canConvert<int>();

//    qDebug() << "Hi" << N;

//    int test = 50;

//    qDebug() << N + test;
//}
