#include <iostream>
using namespace std;

/* class Point {
	public:
		int x, y;		// 멤버 변수 
		void Print();	// 멤버 함수
		Point();		// 생성자 
};

Point::Point(){			// 생성자에서 x = 100, y = 100으로 초기화한다. 
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
			void Print();		// 멤버 함수
			Point();			// 생성자 
			
			void SetXY(int x1, int y1) {
				x = x1;
				y = y1;
			}
		private:
			int x, y;			// 멤버 변수 
	};
	
	Point::Point(){				// 생성자에서 x = 0, y = 0으로 초기화한다. 
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
				cout << "현재 나의 x 좌표 : " << x << endl;
			}
		private:
			int x, y;
	};
	
	Point::Point() {
		x = 50;
		y = 50;
		cout << "생성자를 호출해서 x의 값은 : " << x << endl;
	}
	
	int main(void) {
		Point p1;
		
		p1.MoveLeft();		p1.ShowMyPoint();
		p1.MoveLeft();		p1.ShowMyPoint();
		p1.MoveRight();		p1.ShowMyPoint();
		p1.MoveLeft();		p1.ShowMyPoint();
		
	}
