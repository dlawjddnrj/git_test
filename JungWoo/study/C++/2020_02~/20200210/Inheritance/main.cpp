#include <iostream>
#include <cstring>
using namespace std;

class PermanentWorker		// 데이터 클래스
{
private:
	char name[100];
	int salary;

public:
	PermanentWorker(char* name, int money)
		: salary(money)
	{
		strcpy_s(this->name, name);
	}

	int getPay() const
	{
		return salary;
	}

	void show() const
	{
		cout << "name : " << name << endl;
		cout << "salary: " << getPay() << endl << endl;
	}
};

class EmployeeHandler		// 핸들러 클래스
{
private:
	PermanentWorker* empList[50];
	int empNum;

public:
	EmployeeHandler() : empNum(0) { }

	void addEmployee(PermanentWorker* emp)
	{
		empList[empNum++] = emp;
	}

	void showAll() const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->show();
		}
	}

	void showTotal() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->getPay();
		}

		cout << "salary sum : " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}
};

class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, char* myname) : age(myage)
	{
		strcpy_s(name, myname);
	}

	void whatYourName() const
	{
		cout << "My name is " << name << endl;
	}

	void howOldAreYou() const
	{
		cout << "I'm " << age << " yeras old" << endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50];

public:
	UnivStudent(int myage, char * myname, char* mymajor)
		: Person(myage, myname)
	{
		strcpy_s(major, mymajor);
	}

	void whoAreYou() const
	{
		whatYourName();
		howOldAreYou();
		cout << "My major is" << major << endl << endl;
	}
};

class Car
{
private:
	int gasolineGauge;
public:
	Car(int gas)
	{
		gasolineGauge = gas;
	}

	int getGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int gas, int elec)
		: Car(gas)
	{
		electricGauge = elec;
	}

	int getElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int elec, int water)
		: HybridCar(gas, elec)
	{
		waterGauge = water;
	}

	void show()
	{
		cout << "잔여 가솔린 : " << getGasGauge() << endl;
		cout << "잔여 전기량 : " << getElecGauge() << endl;
		cout << "잔여 워터량 : " << waterGauge << endl;
	}
};

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* fname, int fage)
		: age(fage)
	{
		name = new char[strlen(fname) + 1];
		strcpy(name, fname);
	}

	~MyFriendInfo()
	{
		delete[]name;
	}

	void showMyFriendInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char * fname, int fage, char * faddr, char * fphone)
		: MyFriendInfo(fname, fage)
	{
		addr = new char[strlen(faddr) + 1];
		phone = new char[strlen(fphone) + 1];
		
		strcpy(addr, faddr);
		strcpy(phone, fphone);
	}

	~MyFriendDetailInfo()
	{
		delete[]addr;
		delete[]phone;
	}

	void showMyFriendDetailInfo()
	{
		showMyFriendInfo();
		cout << "주소 : " << addr << endl;
		cout << "번호 : " << phone << endl;
	}
};

int main(void)
{
	/*EmployeeHandler handler;
	handler.addemployee(new permanentworker("kim", 1000));
	handler.addemployee(new permanentworker("lim", 2000));
	handler.showAll();
	handler.showTotal();*/

	HybridWaterCar test(10, 20, 30);
	test.show();
	const char test2[4] = "Lim";
	MyFriendDetailInfo jw(test2, 20, "연무동245-10", "010-8020-5022");
}