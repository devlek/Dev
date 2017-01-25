#include<iostream>
using namespace std;

// *this 포인터의 활용
// 객체의 멤버변수와 객체 아래의 지역변수가 이름이 겹치는 경우 -> this 포인터를 이용 구분가능
// this.(name) -> 멤버변수 
class TwoNumber
{
private:
	int num1, num2;

public:

	TwoNumber(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}

	/*
	TwoNumber(int num1, int num2)
	:num1(num1),num2(num2){}
	*/

	void ShowTwoNumber()
	{
		cout << this ->num1 << endl;
		cout << this ->num2 << endl;
	}
};

int main(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}