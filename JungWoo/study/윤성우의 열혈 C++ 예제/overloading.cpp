#include <iostream>
using namespace std;

/* class myHouse {
	private:
		int room;
		
	public:
		myHouse() {
			room = 1;
			cout << "room : " << room << endl;
		}
		myHouse(int num) {
			room = num;
			cout << "room : " << room << endl;
		}
		int getRoom();
		
		~myHouse() {
			cout << "myHouse�� �Ҹ� !!" << endl;
		}
};

myHouse::getRoom() {
	return room;
}

int main(void) {
	myHouse a(5);
	a.getRoom();
} */

namespace Book {
	namespace Title {
		char * title;
	}
}

char * title;
int main(void) {
	Book::Title::title = "CANDY";
	
	title = "COOKIE";
	
	cout << title << "��" << Book::Title::title << endl;
}
