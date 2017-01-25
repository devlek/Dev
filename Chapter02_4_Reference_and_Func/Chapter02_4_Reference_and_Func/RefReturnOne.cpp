#include<iostream>
using namespace std;

int& RefRetFuncOne(int &ref)			// 입력이 참조형
{
	ref++;
	return ref;							// 출력도 참조형
}

int main(void)
{
	int num1 = 1;						// num1=1로 시작
	int &num2 = RefRetFuncOne(num1);	// num2=2 -> num1=2

	num1++;								//num1=3 -> num2=3
	num2++;								//num2=4 -> num1=4
	cout << "num1: " << num1 << endl;
	cout << "num2  " << num2 << endl;
	return 0;

}