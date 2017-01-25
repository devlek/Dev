#include<iostream>
using namespace std;

// const 변수와 마찬가지로 '참조자'도 선언과 동시에 초기화가 이뤄져야 한다.
// 이니셜라이저를 이용하면 참조자도 멤버변수로 선언될 수 있다.
class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;  // AAA 객체 생성시 실제로 생성자가 호출되는지 확인하기 위해서 삽입한 출력문
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA &ref;					// 참조자가 멤버변수로 선언되었다 -> 이니셜라이저를 통하여 초기화를 하여야 한다.
	const int &num;				// const 참조자가 선언됨 -> 이니셜라이저를 통해서 정수형 상수로 초기화 가능

public:
	BBB(AAA &r, const int &n)
		:ref(r), num(n)
	{ // empty construct
	}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num" << num << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}