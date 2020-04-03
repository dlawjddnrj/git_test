#include <iostream>
using namespace std;

typedef struct __Point 
{
	int xpos, ypos;
} Point;

Point& pntAdder(const Point &p1, const Point &p2)
{
	Point *addptr = new Point;
	addptr.xpos = p1.xpos + p2.xpos;
	addptr.ypos = p1.ypos + p2.ypos;
	
	return addptr;
}

int main(void) {
	Point *testPtr1 = new Point;
	testPtr1.xpos = 2;
	testPtr1.ypos = 4;
	
	Point *testPtr2 = new Point;
	testPtr2.xpos = 10;
	testPtr2.ypos = 20;
	
	Point &ptrf = new pntAdder(*testPtr1, *testPtr2);
	cout << "testPtr1 xpos + testPtr2 xpos : " << ptrf.xpos << endl;
	cout << "testPtr1 ypos + testPtr2 ypos : " << ptrf.ypos << endl;
	
	delete testPtr1;
	delete testPtr2;
	delete ptrf;
	
	return 0;
}
