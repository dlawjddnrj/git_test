#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Point.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;
	
public:
	bool inItMembers(const Point &L, const Point &R);
	void showRectInfo() const;
};

#endif
