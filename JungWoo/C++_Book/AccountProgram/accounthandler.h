#ifndef ACCOUNTHANDLER_H
#define ACCOUNTHANDLER_H
#include "account.h"

class AccountHandler {
    private:
        Account * accArr[100];		// Account 저장을 위한 배열
        int accNum;				// 저장된 Account 수
    public:
        AccountHandler();
        void ShowMenu() const;
        void MakeAccount();
        void DepositMoney();
        void WithdrawMoney();
        void ShowAllAccInfo() const;
        ~AccountHandler();

    protected:
        void MakeNormalAccount();
        void MakeCreditAccount();
};

#endif // ACCOUNTHANDLER_H
