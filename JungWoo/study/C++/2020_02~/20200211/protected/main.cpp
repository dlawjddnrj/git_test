#include <iostream>
using namespace std;

class Base
{
private:
	int privateNum;
protected:
	int protectedNum;
public:
	int publicNum;
};

class Derived : protected Base
{
public:
	void show()
	{
//		cout << privateNum << endl;		// ������ ����
		cout << protectedNum << endl;
		cout << publicNum << endl;
	}
};

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

class Computer
{
private:
	char owner[50];
public:
	Computer(char* name)
	{
		strcpy_s(owner, name);
	}

	void Calculate()
	{
		cout << "��û ������ ����մϴ�." << endl;
	}
};

class NotebookComp : public Computer
{
private:
	int Battery;
public:
	NotebookComp(char* name, int initChag)
		: Computer(name), Battery(initChag)
	{ }
	int GetBatteryInfo() { return Battery; }
	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattery();
	}
};

class TableNotebook : public NotebookComp
{
private:
	char regstPenModel[50];
public:
	TableNotebook(char* name, int initChag, char* pen)
		: NotebookComp(name, initChag)
	{
		strcpy_s(regstPenModel, pen);
	}

	void Write(char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}

		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "��ϵ� ���� �ƴմϴ�. ";
			return;
		}

		cout << "�ʱ� ������ ó���մϴ�." << endl;
		UseBattery();
	}
};

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

class Rectangle
{
private:
	int x, y;
public:
	Rectangle(int x_, int y_)
		: x(x_), y(y_)
	{ }
	void show()
	{
		cout << "���� : " << x * y << endl;
	}
};

class Square : public Rectangle
{
private:
	int num;
public:
	Square(int num_)
		: Rectangle(num_, num_)
	{
		num = num_;
	}
};

/* int main(void)
{
	Rectangle rec(4, 3);
	rec.show();

	Square sqr(7);
	sqr.show();
	return 0;
} */

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

class Book
{
private:
	string title;
	string isbn;
	int price;
public:
	Book(string title_, string isbn_, int price_)
		: title(title_), isbn(isbn_), price(price_) 
	{ }

	void showBook()
	{
		cout << "���� : " << title << endl;
		cout << "ISBN : " << isbn << endl;
		cout << "���� : " << price << endl;
	}
};

class EBook : public Book
{
private:
	string DRMKey;
public:
	EBook(string Etitle, string Eisbn, int Eprice, string drm)
		: Book(Etitle, Eisbn, Eprice)
	{
		DRMKey = drm;
	}

	void showEBook()
	{
		showBook();
		cout << "����Ű : " << DRMKey << endl;
	}
};

int main(void)
{
	Book book("���̻�����ĥ�ȱ���12345678", "555-12345-890-0", 20000);
	book.showBook();
	cout << endl;
	EBook ebook("EBook �Դϴ�", "1234-5555", 50000, "dlawjddn");
	ebook.showEBook();

	return 0;
}