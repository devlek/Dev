#include<iostream>
using namespace std;

// private 생성자
// 클래스 내부에서만 객체의 생성을 허용하려는 목적으로 생성자를 private으로 선언할 수 있다.

// public과 private 선언에 따른 차이점을 확인하기 위한 예제
class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const
	{
		AAA *ptr = new AAA(n);
		return *ptr;
	}

	void ShowNum() const { cout << num << endl;  }

private:
	AAA(int n) :num(n) {}
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA &obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA &obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete &obj1;
	delete &obj2;
	return 0;
}





