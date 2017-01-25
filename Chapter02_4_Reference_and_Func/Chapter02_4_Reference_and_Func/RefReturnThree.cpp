#include<iostream>
using namespace std;

int RefRetFuncTwo(int &ref)  //함수 반환이 int형
{
	ref++;
	return ref;

}

int main(void)
{
	int num1 = 1;					//num1=1;
	int num2 = RefRetFuncTwo(num1); // num1=2, num2=2

	num1 += 1;						//num1=3;
	num2 += 100;					//num2=102
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

}