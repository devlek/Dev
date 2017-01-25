#include<iostream>
using namespace std;

class FruitSeller {
private:
	int myMoney;
	int NumofApple;
	int APPLE_PRICE;

public:
	FruitSeller(int price, int num, int money) {
		APPLE_PRICE = price;
		NumofApple = num;
		myMoney = money;
	}

	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		NumofApple -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() {
		cout << "���� ���: " << NumofApple << endl;
		cout << "�Ǹ� ����: " << myMoney << endl;
	}

};

class FruitBuyer {
private:
	int myMoney;
	int NumofApple;
public:
	FruitBuyer(int money) {
		myMoney = money;
		NumofApple = 0;
	}

	void BuyApples(FruitSeller &seller, int money) {
		NumofApple += seller.SaleApples(money);
		myMoney -= money;
	}

	void  ShowBuyResult() {
		cout << "������ ���: " << NumofApple << endl;
		cout << "���� �ݾ�: " << myMoney << endl;
	}
};




int main(void) {
	FruitBuyer buy(5000);
	FruitSeller sell(1000,20,0);

	buy.BuyApples(sell, 2000);

	sell.ShowSalesResult();
	buy.ShowBuyResult();

}
