#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main(void) {
	Point pos1;
	
	if(!pos1.inItMembers(-2, 4))
	{
		cout << "�ʱ�ȭ ����" << endl;
	}
	
	if(!pos1.inItMembers(2, 4))
	{
		cout << "�ʱ�ȭ ����" << endl;
	}
	
	Point pos2;
	if(!pos2.inItMembers(5, 9))
	{
		cout << "�ʱ�ȭ ����" << endl;
	}
	
	Rectangle rect;
	
	if(!rect.inItMembers(pos2, pos1))
	{
		cout << "���簢�� �ʱ�ȭ ����" << endl;
	}
	
	if(!rect.inItMembers(pos1, pos2))
	{
		cout << "���簢�� �ʱ�ȭ ����" << endl;
	}
	
	rect.showRectInfo();
	return 0;
}
