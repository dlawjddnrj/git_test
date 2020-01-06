#include "myclass.h"

#include <QDebug>
#include <cstdlib>
#include <ctime>


myClass::myClass(QObject* obj):
    m_obj(obj)
{
}

void myClass::onButtonClicked(QVariant var)
{
    int test = var.canConvert<int>() ? var.toInt() +1 : +0;
    int imsi = test;
    int test_arr[6];
    int such = 0;
    srand((unsigned int)time(NULL));

    std::string sfd [] = {"a","b","c","d","e","f"};
    for (imsi = 0 ; imsi < 6 ; imsi ++) {


        test_arr[imsi] = {(rand()%45)+1};
//        for (such ; such < imsi ; such++) {
//            if(test_arr[imsi] == test_arr[such])
//            imsi--;
//            break;
//        }

        qDebug() << test_arr[imsi] ;

        m_obj->setProperty(sfd[imsi].c_str(),QVariant(test_arr[imsi]));


    }


}
