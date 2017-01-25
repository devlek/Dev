#include<iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1; //선언되면서 &는 참조자임.
	num2 = 3047;	  //num1과 num2는 사실상 같은 변수. 이름만 다름. 같은 주소 가짐.

	cout << "VAL: " << num1 << endl;  
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;

	num1 = 1010;
	cout << "REF: " << num1 << endl;
	cout << "REF: " << num2 << endl;
}