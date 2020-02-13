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
	cout << "���� ID : " << accID << endl;
	cout << "�̸� : " << name << endl;
	cout << "�ܾ� : " << balance << endl << endl;
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
	Account::deposit(money);					// ���� �߰�
	Account::deposit(money * (rate / 100.0));	// ���� �߰�
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
	NormalAccount::deposit(money);					// ���� �߰�
	Account::deposit(money * (level / 100.0));	// ���� �߰�
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
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void AccountHandler::makeAcc(void)
{
	int accID;
	string name;
	int balance;
	int accountChoice;

	cout << "[���� ���� ����]" << endl;
	cout << "1. ���뿹�ݰ���" << endl;
	cout << "2. �ſ�ŷڰ���" << endl;
	cout << "���� : "; cin >> accountChoice;
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
		cout << "�߸� �����ϼ̽��ϴ�." << endl;
		return;
	}
}

void AccountHandler::makeNormalAccount(void)
{
	int accID;
	string name;
	int balance;
	int rate;

	cout << "[���뿹�ݰ��� ����]" << endl;
	cout << "����ID : ";	cin >> accID;
	cout << "�̸� : "; cin >> name;
	cout << "�Աݾ� : "; cin >> balance;
	cout << "������ : "; cin >> rate;
	cout << "���� ���� �����ϼ̽��ϴ�~ ^^" << endl << endl;

	accArr[accNum++] = new NormalAccount(accID, name, balance, rate);
}

void AccountHandler::makeCreditAccount(void)
{
	int accID;
	string name;
	int balance;
	int rate;
	int level;

	cout << "[�ſ�ŷڰ��� ����]" << endl;
	cout << "����ID : ";	cin >> accID;
	cout << "�̸� : "; cin >> name;
	cout << "�Աݾ� : "; cin >> balance;
	cout << "������ : "; cin >> rate;
	cout << "�ſ� ��� (1 to A, 2 to B, 3 to C) : "; cin >> level;
	cout << "���� ���� �����ϼ̽��ϴ�~ ^^" << endl << endl;

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
	cout << "[�� ��]" << endl;
	cout << "����ID : "; cin >> tempID;
	cout << "�Աݾ� : "; cin >> tempbalance;
	cout << endl;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->getAccID() == tempID)
		{
			accArr[i]->deposit(tempbalance);
			cout << "�Ա� �Ϸ� !" << endl << endl;
		}
		else {
			cout << "��ġ�ϴ� ID�� �����ϴ�." << endl;
		}
	}
}

void AccountHandler::withdraw(void)
{
	int tempID;
	int tempbalance;
	cout << "[�� ��]" << endl;
	cout << "����ID : "; cin >> tempID;
	cout << "��ݾ� : "; cin >> tempbalance;
	cout << endl;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->getAccID() == tempID)
		{
			accArr[i]->withdraw(tempbalance);
			cout << "��� �Ϸ� !" << endl << endl;
		}
		else {
			cout << "��ġ�ϴ� ID�� �����ϴ�." << endl;
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
		cout << "���� : ";
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
			cout << "�߸� �����ϼ̽��ϴ�..." << endl;
		}
	}
	return 0;
}