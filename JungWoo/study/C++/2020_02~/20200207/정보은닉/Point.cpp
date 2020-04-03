#include <iostream>
#include "Point.h"
using namespace std;

bool Point::inItMembers(int xpos, int ypos)
{
	if(xpos < 0 || ypos < 0)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	
	x = xpos;
	y = ypos;
	return true;
}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}

bool Point::setX(int xpos)
{
	if(0 > xpos || xpos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	
	x = xpos;
	return true;
}

bool Point::setY(int ypos)
{
	if(0 > ypos || ypos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	
	y = ypos;
	return true;
}
