#include<iostream>


// 함수 오버로딩이란?
// : 매개변수가 다르면 같은 함수 이름 사용 가능
// : c언어는 안되지만 c++에서는 함수를 찾는 방식이 매개변수+함수이름 이기 떄문에
void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}