#ifndef HIGHCREDITACCOUNT_H
#define HIGHCREDITACCOUNT_H
#include "normalaccount.h"

class HighCreditAccount : public NormalAccount {
    private:
        int specialRate;

    public:
        HighCreditAccount(int ID, int money, char *name, int rate, int special)
            : NormalAccount(ID, money, name, rate), specialRate(special) { }

    virtual void Deposit (int money) {
        NormalAccount::Deposit(money);
        Account::Deposit(money * (specialRate / 100.0));
    }
};

#endif // HIGHCREDITACCOUNT_H
