#include<iostream>
using namespace std;

/*

* 전역변수가 필요한 상황
	결론: 어느 클래스에서나 sim, cmx에 접근이 가능하다. 문제의 소지가 있음
		  이를 해결하기위해 다른 예제에서 static을 활용한다. 
*/

int simObjcnt = 0;
int cmxObjcnt = 0;

class SoSimple
{
public:
	SoSimple()
	{
		simObjcnt++;
		cout << simObjcnt << "번째 SoSimple 객체" << endl;
	}
};
class SoComplex
{
public:
	SoComplex()
	{
		cmxObjcnt++;
		cout << cmxObjcnt << "번째 SoComplex 객체" << endl;
	}

	SoComplex(SoComplex &copy)					// SoComplex() 에서 호출됨.
	{
		cmxObjcnt++;
		cout << cmxObjcnt << "번째 SoComplex 객체" << endl;
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