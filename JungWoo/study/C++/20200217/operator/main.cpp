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

	Point operator* (int times)
	{
		Point pos(xpos * times, ypos * times);
		return pos;
	}

	friend istream& operator>>(istream&, Point&);
	friend ostream& operator<<(ostream&, const Point&);
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << pos.xpos << ", " << pos.ypos << endl;
	return os;
}

istream& operator>>(istream& is, Point& pos)
{
	is >> pos.xpos >> pos.ypos;
	return is;
}

int main(void)
{
	Point pos(1, 2);
	Point cpy;

	cpy = pos * 3;
	cpy.show();

	cpy = pos * 3 * 2;
	cpy.show();

	Point pp;
	cin >> pp;
	cout << pp;

	return 0;
}