#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main(void) {
	Point pos1;
	
	if(!pos1.inItMembers(-2, 4))
	{
		cout << "초기화 실패" << endl;
	}
	
	if(!pos1.inItMembers(2, 4))
	{
		cout << "초기화 실패" << endl;
	}
	
	Point pos2;
	if(!pos2.inItMembers(5, 9))
	{
		cout << "초기화 실패" << endl;
	}
	
	Rectangle rect;
	
	if(!rect.inItMembers(pos2, pos1))
	{
		cout << "직사각형 초기화 실패" << endl;
	}
	
	if(!rect.inItMembers(pos1, pos2))
	{
		cout << "직사각형 초기화 실패" << endl;
	}
	
	rect.showRectInfo();
	return 0;
}
