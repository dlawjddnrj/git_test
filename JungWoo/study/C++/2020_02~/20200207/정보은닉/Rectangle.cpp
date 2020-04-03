#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::inItMembers(const Point &L, const Point &R)
{
	if(L.getX() > R.getX() || L.getY() > R.getY())
	{
		cout << "잘못된 위치 정보 전달" << endl;
		return false;
	}
	
	upLeft = L;
	lowRight = R;
	return true;
}

void Rectangle::showRectInfo() const
{
	cout << "좌 상단" << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;
	
	cout << "우 하단" << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl;
}
