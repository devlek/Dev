#include<iostream>

//디폴트 값은 초기 함수 선언할 때만 넣어주면 됨.
int Adder(int num1 = 1, int num2 = 2);

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3,5) << std::endl;
	return 0;

}

int Adder(int num1, int num2)
{
	return num1 + num2;
}