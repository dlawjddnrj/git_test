#include <iostream>
#include <cstring>
using namespace std;

/* class A
{
private:
	int num;
	A(int n) : num(n) { }
	
public:
	A() : num(0)  { }
	A& CreateInitObj(int n) const
	{
		int temp = n % 2;
		
		A *ptr = new A(n);
		
		if(temp == 0){
			*ptr = 10;
			cout << "n���� �Ѿ�� ���� ¦��." << endl;
			return *ptr;
		}
		*ptr = 100;
		cout << "n���� �Ѿ�� ���� Ȧ��." << endl;
		
		return *ptr;
	}
	
	void show() const { cout << num << endl; }
	
	~A() {
		delete *ptr;
	}
};

int main(void) {
	A base;
	base.show();
	
	A &obj1 = base.CreateInitObj(10);
	obj1.show();
	
	A &obj2 = base.CreateInitObj(5);
	obj2.show();
	
	delete &obj1;
	delete &obj2;
	return 0;
} */

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

/* 
class Person
{
private:
	char *name;
	int age;
	
public:
	Person(char *myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	
	void show() const
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	
	~Person()
	{
		delete []name;
	}
};

int main(void) {
	Person jungwoo("jungwoo", 20);
	
	jungwoo.show();
} */

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

namespace LEVEL {
		enum {
		CLERK = 0,
		SENIOR,
		ASSIST,
		MANAGER
	};
	
	void check(int num) 
	{
		switch(num)
		{
			case CLERK:
				cout << "���";
				break;
			case SENIOR:
				cout << "����";
				break;
			case ASSIST:
				cout << "�븮";
				break;
			case MANAGER:
				cout << "����";
				break;
			default:
				cout << "������ �߸� �Է� �ϼ̽��ϴ�." << endl;
				break;
		}
	}
}

class NameCard
{
private:
	char *name;
	char *company;
	char *phone;
	int level;
	
public:
	NameCard(char *name_, char *company_, char *phone_, int level_)
		: level(level_)
	{
		name = new char[strlen(name_) + 1];
		company = new char[strlen(company_) + 1];
		phone = new char[strlen(phone_) + 1];
		
		strcpy(name, name_);
		strcpy(company, company_);
		strcpy(phone, phone_);
	}
	
	void show()
	{
		cout << "�̸� : " << name << endl;
		cout << "ȸ�� : " << company << endl;
		cout << "��ȭ��ȣ : " << phone << endl;
		cout << "���� : "; LEVEL::check(level);
	}
	
	~NameCard()
	{
		delete []name;
		delete []company;
		delete []phone;
	}
};

int main(void) {
	NameCard manClerk("lee", "ABCEng", "010-1111-2222", LEVEL::CLERK);
	manClerk.show();
}
