#include<iostream>
using namespace std;

/*

* ���������� �ʿ��� ��Ȳ
	���: ��� Ŭ���������� sim, cmx�� ������ �����ϴ�. ������ ������ ����
		  �̸� �ذ��ϱ����� �ٸ� �������� static�� Ȱ���Ѵ�. 
*/

int simObjcnt = 0;
int cmxObjcnt = 0;

class SoSimple
{
public:
	SoSimple()
	{
		simObjcnt++;
		cout << simObjcnt << "��° SoSimple ��ü" << endl;
	}
};
class SoComplex
{
public:
	SoComplex()
	{
		cmxObjcnt++;
		cout << cmxObjcnt << "��° SoComplex ��ü" << endl;
	}

	SoComplex(SoComplex &copy)					// SoComplex() ���� ȣ���.
	{
		cmxObjcnt++;
		cout << cmxObjcnt << "��° SoComplex ��ü" << endl;
	}
};

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();
	return 0;
}