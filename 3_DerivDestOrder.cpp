#include<iostream>
using namespace std; 

/*
결1. 유도 클래스의 객체가 소멸될 때 유도 클래스의 소멸자가 먼저 실행되고 난 다음에 기초 클래스의 소멸자가 실행된다.
결2. 스택에 생성된 객체의 소멸순서는 생성순서와 반대이다.

* 생성자에서 동적 할당한 메모리 공간은 소멸자에서 해제한다.

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