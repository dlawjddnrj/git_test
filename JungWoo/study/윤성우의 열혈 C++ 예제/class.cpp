#include <iostream>
using namespace std;

/* class Point {
	public:
		int x, y;		// ��� ���� 
		void Print();	// ��� �Լ�
		Point();		// ������ 
};

Point::Point(){			// �����ڿ��� x = 100, y = 100���� �ʱ�ȭ�Ѵ�. 
	x = 100;
	y = 100;
}

void Point::Print() {
	cout << "x : " << x << ", " << "y : " << y << endl;
}

int main(void) {
	Point point1;7
	point1.x = 50;
	point1.Print();
	return 0; */
	
	/* class Point {
		public:
			void Print();		// ��� �Լ�
			Point();			// ������ 
			
			void SetXY(int x1, int y1) {
				x = x1;
				y = y1;
			}
		private:
			int x, y;			// ��� ���� 
	};
	
	Point::Point(){				// �����ڿ��� x = 0, y = 0���� �ʱ�ȭ�Ѵ�. 
		x = 0, y = 0;
	}
	
	void Point::Print() {
		cout << "x : " << x << ", " << "y : " << y << endl;
	}
	
	int main(void) {
		Point point1;
		point1.SetXY(30, 100);
		point1.Print();
		return 0;
	} */
	
	class Point {
		public:
			Point();
			
			void MoveLeft() {
				x = x - 1;
			}
			
			void MoveRight() {
				x = x + 1;
			}
			
			void ShowMyPoint(){
				cout << "���� ���� x ��ǥ : " << x << endl;
			}
		private:
			int x, y;
	};
	
	Point::Point() {
		x = 50;
		y = 50;
		cout << "�����ڸ� ȣ���ؼ� x�� ���� : " << x << endl;
	}
	
	int main(void) {
		Point p1;
		
		p1.MoveLeft();		p1.ShowMyPoint();
		p1.MoveLeft();		p1.ShowMyPoint();
		p1.MoveRight();		p1.ShowMyPoint();
		p1.MoveLeft();		p1.ShowMyPoint();
		
	}
