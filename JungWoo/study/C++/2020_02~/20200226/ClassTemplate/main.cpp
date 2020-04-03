#include <iostream>
using namespace std;
template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0);
	void show() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{ }

template <typename T>
void Point<T>::show() const
{
	cout << xpos << ", " << ypos << endl;
}

int main(void)
{
	Point <int> pos1(3, 4);
	Point <double> pos2(2.5, 1.8);
	Point <char> pos3('J', 'W');

	pos1.show();
	pos2.show();
	pos3.show();
	return 0;
}