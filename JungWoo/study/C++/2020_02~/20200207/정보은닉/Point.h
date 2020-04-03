#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:
	int x, y;
	
public:
	bool inItMembers(int xpos, int ypos);
	int getX() const;
	int getY() const;
	bool setX(int xpos);
	bool setY(int ypos);
};

#endif
