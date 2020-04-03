#include <iostream>
#include <cstring>
using namespace std;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2};

enum { NORMAL = 1, CREDIT = 2};

class Account
{
private:
	int accID;
	int balance;
	string name;
public:
	Account(int id, int money, string name_);
	Account(const Account& ref);
	int getAccID() const;
	void deposit(int money);
	int withdraw(int money);
	void showAllAccount() const;
	~Account();
};

Account::Account(int id, int money, string name_)
	: accID(id), balance(money), name(name_)
{ }

Account::Account(const Account& ref)
	: accID(ref.accID), balance(ref.balance), name(ref.name)
{ }

int Account::getAccID() const { return accID; }

void Account::deposit(int money)
{
	balance += money;
}

int Account::withdraw(int money)
{
	if (balance < money)
	{
		return 0;
	}

	balance -= money;
	return money;
}

void Account::showAllAccount() const
{
	cout << "계좌 ID : " << accID << endl;
	cout << "이름 : " << name << endl;
	cout << "잔액 : " << balance << endl << endl;
}

Account::~Account() { }

class NormalAccount : public Account
{
private:
	int rate;
public:
	NormalAccount(int id, string name_, int money, int rate_);
	virtual void deposit(int money);
};

NormalAccount::NormalAccount(int id, string name_, int money, int rate_)
	: Account(id, money, name_), rate(rate_)
{ }

void NormalAccount::deposit(int money)
{
	Account::deposit(money);					// 원금 추가
	Account::deposit(money * (rate / 100.0));	// 이자 추가
}

class HighCreditAccount : public NormalAccount
{
private:
	int level;
public:
	HighCreditAccount(int id, string name_, int money, int rate_, int level_);
	virtual void deposit(int money);
};

HighCreditAccount::HighCreditAccount(int id, string name_, int money, int rate_, int level_)
	: NormalAccount(id, name_, money, rate_), level(level_)
{ }

void HighCreditAccount::deposit(int money)
{
	NormalAccount::deposit(money);					// 원금 추가
	Account::deposit(money * (level / 100.0));	// 이자 추가
}

class AccountHandler
{
private:
	Account* accArr[100];
	int accNum;
public:
	AccountHandler();
	void showMenu(void) const;
	void makeAcc(void);
	void deposit(void);
	void withdraw(void);
	void showAll(void);
protected:
	void makeNormalAccount(void);
	void makeCreditAccount(void);
};

AccountHandler::AccountHandler()
	: accNum(0) { }

void AccountHandler::showMenu(void) const
{
	cout << "----- Menu -----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void AccountHandler::makeAcc(void)
{
	int accID;
	string name;
	int balance;
	int accountChoice;

	cout << "[계좌 종류 선택]" << endl;
	cout << "1. 보통예금계좌" << endl;
	cout << "2. 신용신뢰계좌" << endl;
	cout << "선택 : "; cin >> accountChoice;
	cout << endl;

	switch (accountChoice)
	{
	case 1:
		makeNormalAccount();
		break;
	case 2:
		makeCreditAccount();
		break;
	default:
		cout << "잘못 선택하셨습니다." << endl;
		return;
	}
}

void AccountHandler::makeNormalAccount(void)
{
	int accID;
	string name;
	int balance;
	int rate;

	cout << "[보통예금계좌 개설]" << endl;
	cout << "계좌ID : ";	cin >> accID;
	cout << "이름 : "; cin >> name;
	cout << "입금액 : "; cin >> balance;
	cout << "이자율 : "; cin >> rate;
	cout << "계좌 개설 성공하셨습니다~ ^^" << endl << endl;

	accArr[accNum++] = new NormalAccount(accID, name, balance, rate);
}

void AccountHandler::makeCreditAccount(void)
{
	int accID;
	string name;
	int balance;
	int rate;
	int level;

	cout << "[신용신뢰계좌 개설]" << endl;
	cout << "계좌ID : ";	cin >> accID;
	cout << "이름 : "; cin >> name;
	cout << "입금액 : "; cin >> balance;
	cout << "이자율 : "; cin >> rate;
	cout << "신용 등급 (1 to A, 2 to B, 3 to C) : "; cin >> level;
	cout << "계좌 개설 성공하셨습니다~ ^^" << endl << endl;

	switch (level)
	{
	case 1:
		accArr[accNum++] = new HighCreditAccount(accID, name, balance, rate, LEVEL_A);
	case 2:
		accArr[accNum++] = new HighCreditAccount(accID, name, balance, rate, LEVEL_B);
	case 3:
		accArr[accNum++] = new HighCreditAccount(accID, name, balance, rate, LEVEL_C);
	default:
		break;
	}
}

void AccountHandler::deposit(void)
{
	int tempID;
	int tempbalance;
	cout << "[입 금]" << endl;
	cout << "계좌ID : "; cin >> tempID;
	cout << "입금액 : "; cin >> tempbalance;
	cout << endl;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->getAccID() == tempID)
		{
			accArr[i]->deposit(tempbalance);
			cout << "입금 완료 !" << endl << endl;
		}
		else {
			cout << "일치하는 ID가 없습니다." << endl;
		}
	}
}

void AccountHandler::withdraw(void)
{
	int tempID;
	int tempbalance;
	cout << "[출 금]" << endl;
	cout << "계좌ID : "; cin >> tempID;
	cout << "출금액 : "; cin >> tempbalance;
	cout << endl;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->getAccID() == tempID)
		{
			accArr[i]->withdraw(tempbalance);
			cout << "출금 완료 !" << endl << endl;
		}
		else {
			cout << "일치하는 ID가 없습니다." << endl;
		}
	}
}

void AccountHandler::showAll(void)
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->showAllAccount();
		cout << endl;
	}
}

int main(void)
{
	AccountHandler manager;
	int choice;

	while (1)
	{
		manager.showMenu();
		cout << "선택 : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			manager.makeAcc();
			break;
		case DEPOSIT:
			manager.deposit();
			break;
		case WITHDRAW:
			manager.withdraw();
			break;
		case INQUIRE:
			manager.showAll();
			break;
		case EXIT:
			return 0;
		default:
			cout << "잘못 선택하셨습니다..." << endl;
		}
	}
	return 0;
}