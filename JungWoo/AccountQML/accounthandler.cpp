#include "accounthandler.h"
#include "bankingCommonDecl.h"
#include "account.h"
#include "normalaccount.h"
#include "highcreditaccount.h"

void AccountHandler::ShowMenu() const {
//    cout << "----- Menu -----" << endl;
//    cout << "1.  account opening " << endl;
//    cout << "2.  Deposit " << endl;
//    cout << "3.  Withdrawal " << endl;
//    cout << "4.  Full print of account information " << endl;
//    cout << "5.  Program Termination " << endl;
}

void AccountHandler::MakeAccount() {
    int sel;
//    cout << "[Account type selection]" << endl;
//    cout << "1. ordinary deposit account ";
//    cout << "2. Credit trust account" << endl;
//    cout << "Choice : "; cin >> sel;

    if(sel == NORMAL) {
        MakeNormalAccount();
    } else {
        MakeCreditAccount();
    }
}

void AccountHandler::MakeNormalAccount() {
    int id;
    char name[NAME_LEN];
    int balance;
    int interRate;

//    cout << "[Open a savings account]" << endl;
//    cout << "*** Enter a number for your account ***" << endl;
//    cout << "Account ID : "; cin >> id;
//    cout << "Name : "; cin >> name;
//    cout << "Amount received : "; cin >> balance;
//    cout << "Interest rate : "; cin >> interRate;
//    cout << endl;

    accArr[accNum++] = new NormalAccount(id, balance, name, interRate);
}

void AccountHandler::MakeCreditAccount() {
    int id;
    char name[NAME_LEN];
    int balance;
    int interRate;
    int creditLevel;

//    cout << "[Opening a Credit Trust Account]" << endl;
//    cout << "*** Enter a number for your account ***" << endl;
//    cout << "Account ID : "; cin >> id;
//    cout << "Name : "; cin >> name;
//    cout << "Amount received : "; cin >> balance;
//    cout << "Interest rate : "; cin >> interRate;
//    cout << "Credit rating (1 to A, 2 to B, 3 to C) : "; cin >> creditLevel;
//    cout << endl;

    switch(creditLevel) {
        case 1:
            accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_A);
            break;
        case 2:
            accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_B);
            break;
        case 3:
            accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_C);
    }
}

void AccountHandler::DepositMoney() {
    int money;
    int id;

//    cout << "[Deposit]" << endl;
//    cout << "Account ID : "; cin >> id;
//    cout << "Amount received : "; cin >> money;

    for(int i = 0; i < accNum; i++)
    {
        if(accArr[i]->getAccID() == id)
        {
            accArr[i]->Deposit(money);
//            cout << "The deposit has been completed." << endl;
            return;
        }
    }
//    cout << "Invalid ID." << endl << endl;
}

void AccountHandler::WithdrawMoney() {
    int money;
    int id;

//    cout << "[Withdrawal]" << endl;
//    cout << "Account ID : "; cin >> id;
//    cout << "Forwarding amount : "; cin >> money;

    for(int i = 0; i < accNum; i++) {
        if(accArr[i]->getAccID() == id) {
            if(accArr[i]->Withdraw(money) == 0) {
//                cout << "Insufficient balance." << endl << endl;
                return;
            }

//            cout << "The withdrawal is complete." << endl << endl;
            return;
        }
    }
//    cout << "Invalid ID." << endl << endl;
}

AccountHandler::AccountHandler() : accNum(0) { }

void AccountHandler::ShowAllAccInfo() const {

    for(int i = 0; i < accNum; i++) {
        accArr[i]->ShowAccInfo();
//        cout << endl;
    }
}

AccountHandler::~AccountHandler() {
    for(int i = 0; i < accNum; i++) {
        delete accArr[i];
    }
}

