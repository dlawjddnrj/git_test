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
//		cout << privateNum << endl;		// 컴파일 에러
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
		cout << "요청 내용을 계산합니다." << endl;
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
			cout << "충전이 필요합니다." << endl;
			return;
		}
		cout << "이동하면서 ";
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
			cout << "충전이 필요합니다." << endl;
			return;
		}

		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "등록된 펜이 아닙니다. ";
			return;
		}

		cout << "필기 내용을 처리합니다." << endl;
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
		cout << "면적 : " << x * y << endl;
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
		cout << "제목 : " << title << endl;
		cout << "ISBN : " << isbn << endl;
		cout << "가격 : " << price << endl;
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
		cout << "인증키 : " << DRMKey << endl;
	}
};

int main(void)
{
	Book book("일이삼사오육칠팔구십12345678", "555-12345-890-0", 20000);
	book.showBook();
	cout << endl;
	EBook ebook("EBook 입니다", "1234-5555", 50000, "dlawjddn");
	ebook.showEBook();

	return 0;
}