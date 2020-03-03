#include "BankingCommonDecl.h"
#include "Account.h"

Account::Account(int ID, int money, string name)
	: accID(ID), balance(money), cusName(name)
{ }

Account::Account(const Account& ref)
	: accID(ref.accID), balance(ref.balance), cusName(ref.cusName)
{ }

Account& Account::operator=(const Account& ref)
{
	accID = ref.accID;
	balance = ref.balance;
	cusName = ref.cusName;
	return *this;
}

int Account::GetAccID() const { return accID; }

void Account::Deposit(int money)
{
	balance += money;
}

int Account::Withdraw(int money)
{
	if (balance < money)
		return 0;
	balance -= money;
	return money;
}

void Account::ShowAccInfo() const
{
	cout << "°èÁÂ ID: " << accID << endl;
	cout << "ÀÌ ¸§ : " << cusName << endl;
	cout << "ÀÜ ¾× : " << balance << endl;
}

Account::~Account()
{ }