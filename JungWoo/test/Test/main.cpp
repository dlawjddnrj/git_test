#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<int> goods = { 50, 62, 93 };
	vector<int> overItem;
	vector<int> temp;
	int result = 0;
	int goodsSum = goods[0] + goods[1] + goods[2];
	int tempcnt = 0;

	if (goods[0] >= 50 && goods[1] >= 50 && goods[2] >= 50) {
		result += (goods[0] - 10);
		result += (goods[1] - 10);
		result += (goods[2] - 10);
	}

	if (goodsSum <= 50) {
		cout << goodsSum << endl;
		return 0;
	}

	if (goodsSum <= 100) {
		cout << goodsSum - 10 << endl;
	}

	for (int i = 0; i < goods.size(); i++) {
		if (goods[i] >= 50) {
			overItem.push_back(goods[i]);
			goods.erase(goods.begin() + i);
		}
	}

	for (int i = 0; i < goods.size(); i++) {
		if (goods[i] <= 50) {
			temp.push_back(goods[i]);
		}
	}

	for (int i = 0; i < overItem.size(); i++) {
		result += (overItem[i] - 10);
	}

	if (temp[0] + temp[1] >= 50) {
		result += (temp[0] + temp[1] - 10);
	}

	cout << result << endl;
}