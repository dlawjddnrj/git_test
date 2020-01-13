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
			cout << "myHouseÀÇ ¼Ò¸ê !!" << endl;
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
	
	cout << title << "¿Í" << Book::Title::title << endl;
}
