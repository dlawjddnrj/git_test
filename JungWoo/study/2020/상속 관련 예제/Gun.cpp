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
	Gun() { cout << "Gun ������." << endl; }
	~Gun() { cout << "Gun �����" << endl; }
	
	void setBullet(int bullet_) {
		bullet = bullet_;
	}
	
	virtual void Shot(int bullet_, bool relad_) {
		cout << "���� !" << endl;
		--bullet_;
		cout << "���� �Ѿ� : " << bullet_;
	}
	
//	virtual void reload(int magazine, bool reload_) {
//		if(bullet < magazine) {
//			cout << "�Ѿ��� �����մϴ�. ������ �ϰڽ��ϴ�." << endl;
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
				cout << "�����Ͻ� ������ : " << scope << "�� �Դϴ�." << endl;
				break;
			case 6:
				scope = 6;
				break;
			case 8:
				scope = 8;
				break;
			default:
				cout << "scope ������." << endl;
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
	cout << "1. ������" << endl;
	cout << "2. ��������" << endl;
	cout << "�ѱ� ���� : "; cin >> choice;
	
	if(choice == 1) {
		cout << "�������� �����Ͽ����ϴ�." << endl;
		cout << "�Ѿ��� �⺻ 90���̸� �ܹ�(0), ����(1), ����(2)�� �����ϼ���. : "; cin >> rifleType;
		
		if(rifleType == 0) {
			Rifle m4a1Single(rifleBullet, rifleType);
		} else if(strcmp(rifleType, "����") == 0) {
			Rifle m4a1Burst(rifleBullet, rifleType);
		} else if(strcmp(rifleType, "����") == 0) {
			Rifle m4a1Auto(rifleBullet, rifleType);
		} else {
			cout << "�߸� �����Ͽ����ϴ�." << endl;
			return 0;
		}
		
	} else if (choice == 2) {
		cout << "�������۸� �����Ͽ����ϴ�." << endl;
		cout << "�Ѿ��� �⺻ 20���̸�, ������ ����(2, 4, 6, 8)�� �����ϼ���. : "; cin >> sniperX;
		
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
				cout << "�߸� ���� �Ͽ����ϴ�." << endl;
				return 0;
		}
	}
}
