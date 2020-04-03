#include <iostream>
#include "ArrayTemplate.h"
#include "Point.h"
using namespace std;

int main(void)
{
	// int형 정수 저장
	BoundCheckArray<int> iarr(5);
	for (int i = 0; i < 5; i++)
		iarr[i] = (i + 1) * 11;
	for (int i = 0; i < 5; i++)
		cout << iarr[i] << endl;

	// Point 객체 저장
	BoundCheckArray<Point> oarr(3);
	for (int i = 0; i < 3; i++)
	{
		int a = 3, b = 4;
		oarr[i] = Point(a, b);
		a++, b++;
		a++, b++;
	}
	for (int i = 0; i < oarr.GetArrLen(); i++)
	{
		cout << oarr[i];
	}

	// Point 객체의 주소값 저장
	typedef Point* POINT_PTR;
	BoundCheckArray<POINT_PTR> parr(3);
	for (int i = 0; i < 3; i++)
	{
		int a = 3, b = 4;
		parr[i] = new Point(a, b);
		a++, b++;
		a++, b++;
	}
	for (int i = 0; i < parr.GetArrLen(); i++)
	{
		cout << *(parr[i]);
	}

	delete parr[0];
	delete parr[1];
	delete parr[2];
	return 0;
}