#include <iostream>
using namespace std;

class SiniveCap
{
public:
	void Take() const { cout << "�๰�� �� ~ ���ϴ�." << endl; }
};

class SneezeCap
{
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
};

class SnuffleCap
{
public:
	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
};

class CONTAC
{
private:
	SiniveCap sin;
	SneezeCap sne;
	SnuffleCap snu;
	
public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCONATAC(const CONTAC &cap) { cap.Take(); }
};


// @@@@@@@@@@@@@@@@@@@@@@@
class Point
{
private:
	int xpos, ypos;
	
public:
	Point(int x, int y) : xpos(x), ypos(y) { }
	
	void ShowPointInfo() const
	{
		cout << "xpos : " << xpos << ", " << "ypos : " << ypos << endl;
	}
};

class Circle
{
private:
	int rad;			// ������ 
	Point center;		// ���� �߽� 
public:
	Circle(int x, int y, int r) : center(x, y) { rad = r; }
	
	void ShowCircleInfo() const
	{
		cout << "radius : " << rad << endl;
		center.ShowPointInfo();
	}
};

class Ring
{
private:
	Circle inCircle;
	Circle outCircle;
	
public:
	Ring(int Cx, int Cy, int Cr, int Rx, int Ry, int Rr)
		: inCircle(Cx, Cy, Cr), outCircle(Rx, Ry, Rr)
	{ }
	
	void ShowRingInfo() const
	{
		cout << "in Circle Info" << endl;
		inCircle.ShowCircleInfo();
		cout << "Out Circle Info" << endl;
		outCircle.ShowCircleInfo();
	}
};

int main(void) {
	CONTAC cap;
	ColdPatient sufferer;
	sufferer.TakeCONATAC(cap);
	
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;  
}
