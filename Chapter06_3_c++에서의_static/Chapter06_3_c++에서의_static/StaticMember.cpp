#include<iostream>
using namespace std;

/*
* static 멤버변수(클래스 변수)   -> 일반 멤버변수와 달리 클래스당 한개
*/

class SoSimple
{
private:
	static int simObjCnt;
public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};
int SoSimple::simObjCnt = 0;
// 위 코드에 선언된 static 변수는 객체가 생성될 때마다 함께 생성되어 객체별로 유지되는 변수가 아니다.
// 객체를 생성하건 생성하지 않건, 메모리 공간에 딱 하나만 할당되어 공유됨.
// 여러 개의 객체에서 static 변수에 접근가능하나. 객체 내에 static 변수가 존재하는 것은 아니다. -> 객체 외부 존재
// static 변수는 생성자에서 초기화하면 안됨. 외부에서 최고화.

class SoComplex
{
private:
	static int cmxObjCnt;

public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}

	SoComplex(SoComplex &copy)					// SoComplex() 에서 호출됨.
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
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