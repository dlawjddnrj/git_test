#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }

	void show() const
	{
		cout << xpos << ", " << ypos << endl;
	}

	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}

	// int num2 = -num1;

	Point operator-()
	{
		Point pos(-xpos, -ypos);
		return pos;
	}

	friend Point operator~(Point& ref);
	
	friend Point& operator--(Point& ref);
};

Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

Point operator~(Point& ref)
{
	Point Pref(ref.ypos, ref.xpos);
	return Pref;
}

int main(void)
{
	Point pos(1, 2);
	++pos;
	pos.show();
	--pos;
	pos.show();

	++(++pos);
	pos.show();
	--(--pos);
	pos.show();

	Point p1(2, 4);
	Point p2 = -p1;

	p1.show();
	p2.show();

	Point pp1(3, 7);
	Point pp2 = ~pp1;

	pp1.show();
	pp2.show();
	return 0;
}