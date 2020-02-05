#include "account.h"
#include <QDebug>

Account::Account(QObject *acc_) : obj(acc_) { }

void Account::testSlot(QVariant test) {
    qDebug() << test;
}

Account::Account(int ID, int money, char * name)
    : accID(ID), balance(money) {
        cusName = new char[strlen(name) + 1];
        strcpy(cusName, name);
}

Account::Account(const Account & ref)
    : accID(ref.accID), balance(ref.balance) {
        cusName = new char[strlen(ref.cusName) + 1];
        strcpy(cusName, ref.cusName);
}

int Account::getAccID() const
{
    return accID;
}

void Account::Deposit(int money) {
    balance += money;
}

int Account::Withdraw(int money) {
    if(balance < money) {
        return 0;
    }
    balance -= money;
    return money;
}

void Account::ShowAccInfo() const {
    // cout이 아닌 qml 화면으로 출력하기
//    cout << "Account ID : " << accID << endl;
//    cout << "Name : " << cusName << endl;
//    cout << "Balance : " << balance << endl;
}

Account::~Account() {
    delete []cusName;
}
