#include<iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1; //����Ǹ鼭 &�� ��������.
	num2 = 3047;	  //num1�� num2�� ��ǻ� ���� ����. �̸��� �ٸ�. ���� �ּ� ����.

	cout << "VAL: " << num1 << endl;  
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;

	num1 = 1010;
	cout << "REF: " << num1 << endl;
	cout << "REF: " << num2 << endl;
}