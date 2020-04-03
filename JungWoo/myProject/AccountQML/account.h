#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QObject>
#include <QVariant>

class Account : public QObject
{
    Q_OBJECT
public:
    Account(QObject *acc_);
    QObject *obj;

public slots:
    void testSlot(QVariant test);

private:
    int accID;
    int balance;
    char * cusName;

public:
    Account(int ID, int money, char * name);
    Account(const Account & ref);

    int getAccID() const;
    virtual void Deposit(int money);
    int Withdraw(int money);
    void ShowAccInfo() const;
    ~Account();
};

#endif // ACCOUNT_H
