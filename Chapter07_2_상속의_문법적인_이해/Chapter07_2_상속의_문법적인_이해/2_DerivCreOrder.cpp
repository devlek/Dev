#include<iostream>
using namespace std;

/*
 * 유도 클래스의 객체 생성과정  ->  기초 클래스의 생성자 호출에 관심

 결1. 유도 클래스의 객체생성 과정에서 기초 클래스의 생성자는 100% 호출된다.
 결2. 유도 클래스의 생성자에서 기초 클래스의 생성자 호출을 명시하지 않으면, 기초 클래스의 void 생성자가 호출된다.

 클래스 생성 순서.
 유도 클래스만 생성한다고 해도
 자동으로 기초 클래스 -> 유도 클래스 순으로 생성
*/
class SoBase
{
private:
	int baseNum;

public:
	SoBase() : baseNum(20)
	{
		cout << "SoBase()" << endl;
	}

	SoBase(int n) :baseNum(n)
	{
		cout << "SoBase(int n)" << endl;
	}
	void ShowBaseData()
	{
		cout << baseNum << endl;
	}
};

class SoDerived :public SoBase
{
private:
	int derivNum;
public:
	SoDerived() :derivNum(30)
	{
		cout << "SoDerived()" << endl;
	}

	SoDerived(int n) :derivNum(n)
	{
		cout << "SoDerived(int n)" << endl;
	}

	SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2)
	{
		cout << "SoDerived(int n1, int n2)" << endl;
	}
	void ShowDerivData()
	{
		ShowBaseData();
		cout << derivNum << endl;
	}
};

int main(void)
{
	cout << "case1..... " << endl;
	SoDerived dr1;
	dr1.ShowDerivData();
	cout << "--------------------" << endl;
	cout << "case2..... " << endl;
	SoDerived dr2(12);
	dr2.ShowDerivData();
	cout << "--------------------" << endl;
	cout << "case3..... " << endl;
	SoDerived dr3(23, 24);
	dr3.ShowDerivData();
	return 0;
}