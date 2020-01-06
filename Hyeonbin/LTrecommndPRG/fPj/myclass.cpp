#include "myclass.h"

#include <QDebug>
#include <cstdlib>
#include <time.h>


myClass::myClass(QObject* obj):
    m_obj(obj)
{
}

void myClass::onButtonClicked(QVariant var)
{
    int test = var.canConvert<int>() ? var.toInt() +1 : +0;
    int imsi = test;
    int test_arr[6];
    int temp;

    srand((unsigned int) time (NULL));

    std::string sfd [] = {"a","b","c","d","e","f"};

    for (imsi = 0 ; imsi < 6 ; imsi ++) {
        while(1) {
            test_arr[imsi] = rand() % 45 + 1;

            temp = 0;

            for(int j = 0; j < imsi; j++) {
                if(test_arr[imsi] == test_arr[j]) {
                    temp = 1;
                    break;
                }
            }
            if(!temp) {
                break;
            }
        }
        qDebug() << test_arr[imsi] ;
        m_obj->setProperty(sfd[imsi].c_str(),QVariant(test_arr[imsi]));
    }
}
