///include
#include <iostream>
#include <cstring> 
using namespace std;

enum rifleType {
	SINGLE = 0,
	BURST,
	AUTO,
};

class Gun {
protected:
	int bullet;
	bool reload;
	
public:
	Gun() { cout << "Gun 생성자." << endl; }
	~Gun() { cout << "Gun 사라짐" << endl; }
	
	void setBullet(int bullet_) {
		bullet = bullet_;
	}
	
	virtual void Shot(int bullet_, bool relad_) {
		cout << "빵야 !" << endl;
		--bullet_;
		cout << "남은 총알 : " << bullet_;
	}
	
//	virtual void reload(int magazine, bool reload_) {
//		if(bullet < magazine) {
//			cout << "총알이 부족합니다. 재장전 하겠습니다." << endl;
//			
//		}
//	}
};

class Rifle : public Gun {
private:
	bool single = false;
	bool burst = false; 
	bool Auto = false;
	
public:
	Rifle(int bullet_, int type) {
		Gun::setBullet(bullet_);
		
		if(type == 0) {
			single = true;
			cout << single;
		} else if (type == 1) {
			burst = true;
		} else if (type == 2) {
			Auto = true;
		} else {
			return;
		}
	}
	~Rifle() { }
};

class Sniper : public Gun {
private:
	int scope = 2;
	
public:
	Sniper(int bullet_, int scope_) : scope(scope_) {
		Gun::setBullet(bullet_);
		
		switch(scope_) {
			case 2:
				scope = 2;
				break;
			case 4:
				scope = 4;
				cout << "선택하신 배율은 : " << scope << "배 입니다." << endl;
				break;
			case 6:
				scope = 6;
				break;
			case 8:
				scope = 8;
				break;
			default:
				cout << "scope 미장착." << endl;
				break;
		}
	}
	
	~Sniper() { }
};

int main(void) {
	int choice = 0;
	const int rifleBullet = 90;
	const int sniperBullet = 20;
	int sniperX = 0;
	
	cout << "----- Menu -----" << endl;
	cout << "1. 라이플" << endl;
	cout << "2. 스나이퍼" << endl;
	cout << "총기 선택 : "; cin >> choice;
	
	if(choice == 1) {
		cout << "라이플을 선택하였습니다." << endl;
		cout << "총알은 기본 90발이며 단발(0), 점사(1), 연사(2)를 선택하세요. : "; cin >> rifleType;
		
		if(rifleType == 0) {
			Rifle m4a1Single(rifleBullet, rifleType);
		} else if(strcmp(rifleType, "점사") == 0) {
			Rifle m4a1Burst(rifleBullet, rifleType);
		} else if(strcmp(rifleType, "연사") == 0) {
			Rifle m4a1Auto(rifleBullet, rifleType);
		} else {
			cout << "잘못 선택하였습니다." << endl;
			return 0;
		}
		
	} else if (choice == 2) {
		cout << "스나이퍼를 선택하였습니다." << endl;
		cout << "총알은 기본 20발이며, 스코프 배율(2, 4, 6, 8)을 선택하세요. : "; cin >> sniperX;
		
		switch(sniperX) {
			case 2:
				Sniper(sniperBullet, sniperX);
				break;
			case 4:
				Sniper(sniperBullet, sniperX);
				break;
			case 6:
				Sniper(sniperBullet, sniperX);
				break;
			case 8:
				Sniper(sniperBullet, sniperX);
				break;
			default:
				cout << "잘못 선택 하였습니다." << endl;
				return 0;
		}
	}
}
