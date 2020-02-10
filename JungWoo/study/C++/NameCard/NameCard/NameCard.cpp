#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_RANK {
	enum { CLERK, SENIOR, ASSIST, MANAGER };
	
	void ShowPositionInfo(int ran) {
		switch (ran) {
		case CLERK :
			cout << "사원" << endl;
			break;
		case SENIOR :
			cout << "주임" << endl;
			break;
		case ASSIST :
			cout << "대리" << endl;
			break;
		case MANAGER :
			cout << "과장" << endl;
			break;
		}
	}
}

class NameCard {
private:
	char * name;
	char * com;
	char * number;
	int rank;

public:
	NameCard(char* _name, char* _com, char* _number, int ran) 
		: rank(ran)
	{
		name = new char[strlen(_name) + 1];
		com = new char[strlen(_com) + 1];
		number = new char[strlen(_number) + 1];
		
		strcpy(name, _name);
		strcpy(com, _com);
		strcpy(number, _number);
	}

	void ShowNameCardInto() {
		cout << "이름 : " << name << endl;
		cout << "회사 : " << com << endl;
		cout << "전화번호 : " << number << endl;
		cout << "직급 : ";		COMP_RANK::ShowPositionInfo(rank);
		cout << endl;
	}

	~NameCard() {
		delete[]name;
		delete[]com;
		delete[]number;
	}
};

int main(void) {
	NameCard manlee("Lee", "ABCEng", "010-1111-2222", COMP_RANK::CLERK);
	NameCard manhong("Hong", "OrangeEng", "010-3333-4444", COMP_RANK::SENIOR);
	NameCard mankim("Kim", "SoGoodComp", "010-5555-6666", COMP_RANK::ASSIST);
	
	manlee.ShowNameCardInto();
	manhong.ShowNameCardInto();
	mankim.ShowNameCardInto();
	return 0;
}