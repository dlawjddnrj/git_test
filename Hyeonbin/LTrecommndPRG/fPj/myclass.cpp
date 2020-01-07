#include "myclass.h"
#include "jungwoo.h"

#include <QDebug>
#include <cstdlib>
#include <time.h>

myClass::myClass(QObject* obj):
    m_obj(obj)
{
}

myClass::~myClass() {

}

//void jungwoo::inputLottoNumber(QVariant num) {
//    qDebug() << "Hello~" << num;

//    int N = num.canConvert<int>();

//    qDebug() << "Hi" << N;

//    int test = 50;

//    qDebug() << N + test;
//}

void myClass::onButtonClicked(QVariant var)
{
    int test = var.canConvert<int>() ? var.toInt() +1 : +0;
    int i = test;
    int test_arr[6];
    int temp;

    srand((unsigned int) time (NULL));

    std::string sfd [] = {"a","b","c","d","e","f"};

    for (i = 0 ; i < 6 ; i ++) {
        while(1) {

            // 1 6개의 배열 6번 비교해서 같은 값이 안나오게
            test_arr[i] = rand() % 45 + 1;

            temp = 0;

            for(int j = 0; j < i; j++) {
                if(test_arr[i] == test_arr[j]) {
                    temp = 1;
                    break;
                }
            }

            if(!temp) {
                jungwoo::return_randomvalue(test_arr[i]);
                break;
            }
        }
//        qDebug() << test_arr[imsi] ;
        m_obj->setProperty(sfd[i].c_str(),QVariant(test_arr[i]));
    }
}
