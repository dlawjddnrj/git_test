#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

// @@@@@@@@@@@@@@@@@@@@@@@
class Employee
{
private:
	string name;
public:
	Employee(string name_) : name(name_) { }

	void showYourName() const
	{
		cout << "name : " << name << endl;
	}

	virtual int getPay() const
	{
		return 0;
	}

	virtual void showSalaryInfo() const
	{ }
};

class PermanentWorker : public Employee
{
private:
	int salary;
public:
	PermanentWorker(string name_, int salary_)
		: Employee(name_), salary(salary_)
	{ }

	virtual int getPay() const
	{
		return salary;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(string name, int pay)
		: Employee(name), workTime(0), payPerHour(pay)
	{ }

	void addWorkTime(int time)
	{
		workTime += time;
	}

	int getPay() const
	{
		return workTime * payPerHour;
	}

	void showSalary() const
	{
		showYourName();
		cout << "Salary : " << getPay() << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(string name_, int money_, double ratio_)
		: PermanentWorker(name_, money_), salesResult(0), bonusRatio(ratio_)
	{ }

	void addSalesResult(int value)
	{
		salesResult += value;
	}

	int getPay() const
	{
		return PermanentWorker::getPay() + (int)(salesResult * bonusRatio);
	}

	void showSalaryInfo() const
	{
		showYourName();
		cout << "salary : " << getPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }

	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}

	void showAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->showSalaryInfo();
		}
	}

	void showTotalSalary() const
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

int main(void)
{
/*	Person* ptr1 = new Person;
	ptr1->Sleep();

	Student* ptr2 = new Student;
	ptr2->Study();

	Student* ptr3 = new PartTimeStudent;
	ptr3->Study();

	delete ptr1;
	delete ptr2;
	delete ptr3; */

	EmployeeHandler handler;		// ���� �ڵ鷯

	handler.AddEmployee(new PermanentWorker("Kim", 1000));		// ���� ��� PermanentWorker��
	handler.AddEmployee(new PermanentWorker("Lim", 2000));

	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);	// �˹� ��� 
	alba->addWorkTime(5);										// ���� �ð�
	handler.AddEmployee(alba);									// �˹ٸ� ���� ���

	SalesWorker* seller = new SalesWorker("Hong", 5000, 2);		// ������ ���
	seller->addSalesResult(7000);								// ���� ����
	handler.AddEmployee(seller);

	handler.showAllSalaryInfo();								// �̹� �� �����ؾ� �� �޿� ����

	handler.showTotalSalary();									// �̹� �� �����ؾ� �� �޿� �Ѿ�
	return 0; 
}