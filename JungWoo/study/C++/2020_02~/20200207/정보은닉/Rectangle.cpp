#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::inItMembers(const Point &L, const Point &R)
{
	if(L.getX() > R.getX() || L.getY() > R.getY())
	{
		cout << "�߸��� ��ġ ���� ����" << endl;
		return false;
	}
	
	upLeft = L;
	lowRight = R;
	return true;
}

void Rectangle::showRectInfo() const
{
	cout << "�� ���" << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;
	
	cout << "�� �ϴ�" << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl;
}
