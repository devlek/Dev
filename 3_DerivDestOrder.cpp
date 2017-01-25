#include<iostream>
using namespace std; 

/*
��1. ���� Ŭ������ ��ü�� �Ҹ�� �� ���� Ŭ������ �Ҹ��ڰ� ���� ����ǰ� �� ������ ���� Ŭ������ �Ҹ��ڰ� ����ȴ�.
��2. ���ÿ� ������ ��ü�� �Ҹ������ ���������� �ݴ��̴�.

* �����ڿ��� ���� �Ҵ��� �޸� ������ �Ҹ��ڿ��� �����Ѵ�.

*/
class SoBase
{
private:
	int baseNum;

public:
	
	SoBase(int n) :baseNum(n)
	{
		cout << "SoBase() : " << baseNum<<endl;
	}
	~SoBase()
	{
		cout << "~SoBase() : " << baseNum<<endl;
	}
};

class SoDerived :public SoBase
{
private:
	int derivNum;
public:
	SoDerived(int n) :SoBase(n), derivNum(n)
	{
		cout << "SoDerived() : "<<derivNum << endl;
	}

	~SoDerived()
	{
		cout << "~SoDerived() : "<<derivNum << endl;
	}

	

};

int main(void)
{
	SoDerived drv1(15);
	SoDerived drv2(27);
	return 0;
}