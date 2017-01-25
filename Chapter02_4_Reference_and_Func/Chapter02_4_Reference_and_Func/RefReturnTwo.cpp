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
	int num2 = ReRetFuncOne(num1); //num2는 단순 int 딱 2를 넘겨받음. num1=2

	num1 += 1;
	num2 += 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;


}