#include<iostream>
using namespace std;

/*
* static �������(Ŭ���� ����)   -> �Ϲ� ��������� �޸� Ŭ������ �Ѱ�
*/

class SoSimple
{
private:
	static int simObjCnt;
public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};
int SoSimple::simObjCnt = 0;
// �� �ڵ忡 ����� static ������ ��ü�� ������ ������ �Բ� �����Ǿ� ��ü���� �����Ǵ� ������ �ƴϴ�.
// ��ü�� �����ϰ� �������� �ʰ�, �޸� ������ �� �ϳ��� �Ҵ�Ǿ� ������.
// ���� ���� ��ü���� static ������ ���ٰ����ϳ�. ��ü ���� static ������ �����ϴ� ���� �ƴϴ�. -> ��ü �ܺ� ����
// static ������ �����ڿ��� �ʱ�ȭ�ϸ� �ȵ�. �ܺο��� �ְ�ȭ.

class SoComplex
{
private:
	static int cmxObjCnt;

public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}

	SoComplex(SoComplex &copy)					// SoComplex() ���� ȣ���.
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
};

int SoComplex::cmxObjCnt = 0;

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();
	return 0;
}