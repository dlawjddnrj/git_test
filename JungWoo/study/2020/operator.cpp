#include <iostream>
using namespace std;

/*
class Point {
	private:
		int xpos, ypos;
	
	public:
		Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }
		
		void Show() const {
			cout << "[" << xpos << ", " << ypos << "]" << endl;
		}
		
		friend Point operator-(const Point &pos1, const Point &pos2);
};

Point operator-(const Point &pos1, const Point &pos2) {
	Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
	return pos;
}

int main(void) {
	Point pos1(30, 40);
	Point pos2(10, 20);
	Point pos3 = pos1 - pos2;
	
	pos1.Show();
	pos2.Show();
	pos3.Show();
	pos4.Show();
} */

/*
class Point {
	private:
		int xpos, ypos;
		
	public:
		Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }
		
	void Show() {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
	
	Point& operator+=(const Point &ref) {
		xpos += ref.xpos;
		ypos += ref.ypos;
		return *this;
	}
	
	Point& operator-=(const Point &ref) {
		xpos -= ref.xpos;
		ypos -= ref.ypos;
		return *this;
	}
	
	friend bool operator==(const Point &, const Point &);
	friend bool operator!=(const Point &, const Point &);
};

bool operator==(const Point &pos1, const Point &pos2) {
	if(pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos) {
		return true;
	} else {
		return false;
	}
}

bool operator!=(const Point &pos1, const Point &pos2) {
	if(pos1.xpos != pos2.xpos && pos1.ypos != pos2.ypos) {
		return true;
	} else {
		return false;
	}
}

int main(void) {
	Point pos1(10, 10);
	Point pos2(5, 5);
	Point pos3(5, 5);
	
	pos1.Show();
	pos2.Show();
	(pos1 += pos2).Show();
	(pos1 -= pos2).Show();
	
	if(pos2 == pos3) {
		cout << "pos2와 pos3이 똑같다." << endl;
	} else {
		cout << "pos2와 pos3이 다르다." << endl;
	}
	
	if(pos1 != pos3) {
		cout << "pos1와 pos3이 다르다." << endl; 
	} else {
		cout << "pos1와 pos3이 똑같다." << endl;
	}
} */

class Point {
	private:
		int xpos, ypos;
	
	public:
		Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }
		
		void Show() {
			cout << "[" << xpos << ", " << ypos << "]" << endl;
		}
		
	Point operator- () {
		Point pos(-xpos, -ypos);
		return pos;
	}
	
	friend Point operator~ (const Point &);
};

Point operator~ (const Point &ref) {
	Point pos(ref.ypos, ref.xpos);
	return pos;
}

int main(void) {
	Point pos1(9, 7);
	pos1.Show();
	Point pos2=-pos1;
	pos2.Show();
	(~pos2).Show();
	pos2.Show();
	return 0;
}
