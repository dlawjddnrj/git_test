#include <iostream>
using namespace std;

class BoundCheckIntArray
{
private:
	int* arr;
	int arrlen;
public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}
	int& operator[](int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index" << endl;
			exit(1);
		}
		return arr[idx];
	}
	~BoundCheckIntArray()
	{
		delete[]arr;
	}
};

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{ }
	friend ostream& operator<< (ostream& os, const Point& pos);
};

ostream& operator<< (ostream& os, const Point& pos)
{
	os << pos.xpos << ", " << pos.ypos << endl;
	return os;
}

typedef Point* POINT_PTR;

class BoundCheckPointPtrArray
{
private:
	POINT_PTR* arr = 0;
	int arrlen = 0;
	//BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) { }
	//BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray) { }
public:
	BoundCheckPointPtrArray(int len) : arrlen(len)
	{
		cout << "Bound Æ÷ÀÎÅÍ";
	}
	POINT_PTR& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out" << endl;
			exit(1);
		}
		return arr[idx];
	}
	POINT_PTR operator[] (int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int GetArrLen() const { return arrlen; }
	~BoundCheckPointPtrArray() { delete[]arr; }
};

int main(void)
{
	//BoundCheckIntArray arr(5);
	//for (int i = 0; i < 5; i++)
	//	arr[i] = (i + 1) * 2;
	//for (int i = 0; i < 6; i++)
	//	cout << arr[i] << endl;

	BoundCheckPointPtrArray jwArr(3);

	jwArr[0] = new Point(3, 4);
	jwArr[1] = new Point(5, 6);
	jwArr[2] = new Point(7, 8);

	for (int j = 0; j < jwArr.GetArrLen(); j++)
	{
		cout << *(jwArr[j]);
	}

	for (int k = 0; k < 3; k++)
	{
		delete jwArr[k];
	}
	return 0;
}