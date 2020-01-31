#include <iostream>
using namespace std;

/* 
class Person
{
protected:
	string name;
	int age = 0;
	
public:
	Person(const string& name_, int age_)
	{
		name = name_;
		age = age_;
	};	// ���� Ŭ���� �������� ���� 
	void ShowPersonInfo()
	{
		cout << name << "�� ���̴� " << age << "�� �Դϴ�." << endl;
	};
};

class Student : public Person
{
private:
	int studentId;
	
public:
	Student(int sid, const string& name_, int age_) : Person(name, age)
	{
		studentId = sid;
	};	// �Ļ� Ŭ���� �������� ���� 
	
	void ShowPersonInfo()
	{
		cout << "�� �л��� �й��� " << studentId << "�Դϴ�." << endl;
	};	// �Ļ� Ŭ�������� ��ӹ��� ��� �Լ��� ������ 
};

int main(void)
{
	Person lee("����", 35);
	lee.ShowPersonInfo();
	Student hong(1234, "�浿", 29);
	hong.ShowPersonInfo();
	hong.Person::ShowPersonInfo();
	
	Person* ptrPerson;
	Person lee("����", 35);
	
	Student hong(1234, "�浿", 20);
	
	ptrPerson = &lee;
	ptrPerson->ShowPersonInfo();
	ptrPerson = &hong;
	ptrPerson->ShowPersonInfo();
	
	return 0;
} */

#include <iostream>
using namespace std;

class Person
{
protected:
	string name;
	int age;
	
public:
	Person(const string& name_, int age_);	// ���� Ŭ���� �������� ���� 
	virtual void ShowPersonInfo();
};

class Student : public Person
{
private:
	int studentId;
	
public:
	Student(int sid, const string& name_, int age_);	// �Ļ� Ŭ���� �������� ���� 
	virtual void ShowPersonInfo();	// �Ļ� Ŭ�������� ��ӹ��� ��� �Լ��� ������ 
};

int main(void)
{
	Person* ptr_person;
	Person lee("����", 35);
	Student hong(123456789, "�浿", 29);
	
	ptr_person = &lee;
	ptr_person->ShowPersonInfo();
	ptr_person = &hong;
	ptr_person->ShowPersonInfo();
	
	return 0;
}

Person::Person(const string& name_, int age_)	// ���� Ŭ���� �������� ���� 
{
	name = name_;
	age = age_;
}

void Person::ShowPersonInfo()
{
	cout << name << "�� ���̴� " << age << "���Դϴ�." << endl;
}

Student::Student(int sid, const string& name_, int age_) : Person(name_, age_)	// �Ļ� Ŭ���� �������� ���� 
{
	studentId = sid;
}

void Student::ShowPersonInfo()
{
	cout << name << "�� �й��� " << studentId << "�̰� ���̴� " << age << "�� �Դϴ�." << endl;
}
