#pragma once

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include <string>
using namespace std;

class Account
{
private:
	int accID;
	int balance;
	string cusName;
public:
	Account(int ID, int money, string name);
	Account(const Account& ref);
	Account& operator=(const Account& ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};
#endif // !__ACCOUNT_H__
