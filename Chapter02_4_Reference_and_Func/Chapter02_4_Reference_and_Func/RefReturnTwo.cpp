#include<iostream>
using namespace std;

int& ReRetFuncOne(int &ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = ReRetFuncOne(num1); //num2�� �ܼ� int �� 2�� �Ѱܹ���. num1=2

	num1 += 1;
	num2 += 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;


}