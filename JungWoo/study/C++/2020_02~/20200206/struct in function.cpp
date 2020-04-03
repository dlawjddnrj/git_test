#include <iostream>
#include <cstring>
using namespace std;

// @@@@@@@@@@
struct Point
{
	int xpos, ypos;
	
	void movePos(int x, int y);
	void addPoint(const Point &pos);
	void showPosition();
};

// @@@@@@@@@@
class Calculator 
{
private:
	int addCount = 0, divCount = 0, minCount = 0, mulCount = 0;
	int count = 0;
	
public:
	double add(double n1, double n2);
	double div(double n1, double n2);
	double min(double n1, double n2);
	double mul(double n1, double n2);
	void showCount();	
};

// @@@@@@@@@@
class Printer
{
private:
	char str[30];
	
public:
	void setString(char *strValue);
	void showString();
};

void Printer::setString(char *strValue)
{
	strcpy(str, strValue);
}

void Printer::showString()
{
	cout << str << endl;
}

// @@@@@@@@@@
double Calculator::add(double n1, double n2)
{
	addCount++;
	return n1 + n2;
}

double Calculator::div(double n1, double n2)
{
	divCount++;
	return n1 / n2;
}

double Calculator::min(double n1, double n2) 
{
	minCount++;
	return n1 - n2;
}

double Calculator::mul(double n1, double n2)
{
	mulCount++;
	return n1 * n2;
}

void Calculator::showCount()
{
	cout << "µ¡¼À : " << addCount << " " << "»¬¼À : " << minCount << " " << "°ö¼À : " << mulCount << " " << "³ª´°¼À : " << divCount; 
}

// @@@@@@@@@@
void Point::movePos(int x, int y)
{
	xpos += x;
	ypos += y;
}

void Point::addPoint(const Point &pos)
{
	xpos += pos.xpos;
	ypos += pos.ypos;
}

void Point::showPosition() {
	cout << "xpos : " << xpos << endl;
	cout << "ypos : " << ypos << endl;
}

int main(void) {
//	Point pos1 = {12, 4};
//	Point pos2 = {20, 30};
//	
//	pos1.movePos(-7, 10);
//	pos1.showPosition();
//	
//	pos1.addPoint(pos2);
//	pos1.showPosition();

//	Calculator cal;
//	
//	cout << "3.2 + 2.4 = " << cal.add(3.2, 2.4) << endl;
//	cout << "3.5 / 1.7 = " << cal.div(3.5, 1.7) << endl;
//	cout << "2.2 - 1.5 = " << cal.min(2.2, 1.5) << endl;
//	cout << "4.9 * 1.2 = " << cal.mul(4.9, 1.2) << endl;
//	
//	cal.showCount();
	
	Printer pnt;
	
	pnt.setString("Hello world!");
	pnt.showString();
	
	pnt.setString("I love C_++");
	pnt.showString();
	return 0;
}
