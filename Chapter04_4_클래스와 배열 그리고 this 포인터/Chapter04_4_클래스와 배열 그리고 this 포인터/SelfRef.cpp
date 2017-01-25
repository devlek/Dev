#include<iostream>
using namespace std;

// * Self-Reference의 반환
// Self-Reference: 객체 자신을 참조할 수 있는 참조자
// -> this포인터를 이용해서 객체가 자신의 참조에 사용할 수 있는 참조자의 반환문을 구성

class SelRef
{
private:
	int num;

public:					
	SelRef(int n) : num(n)				// 생성자 객체 생성과 함께 num에 값 넣고 생성확인출력
	{
		cout << "객체생성" << endl;
	}

	SelRef& Adder(int n)				//  SelRef&(선언된 반환형) and *this(반환의 내용) 주목
	{									
		num += n;
		return *this;					//  *this -> 객체 자신의 포인터 x -> 객체 자신을 반환하는 의미 o
	}									// 반환형이 참조형 SelRef&로 선언되었으므로
										// 객체 자신을 참조할 수 있는 '참조의 정보'가 반환됨.
	SelRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}

};

int main(void)
{
	SelRef obj(3);					// SelRef 객체 obj 생성  num=3으로 초기화
	SelRef &ref = obj.Adder(2);     // obj의 Adder 함수 호출 및 자신의 참조 값 반환 num=5.
									// 참조자 ref는 객체 obj를 참조하게 됨

	obj.ShowTwoNumber();			// 위 코드에서 일어나는 일의 확인을 위해서
	ref.ShowTwoNumber();			// 객체에 저장되어 있는 값을 호출;


	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber(); // 1. 객체 ref의 Adder 함수 호출 -> Adder함수는 참조값을 반환
	return 0;											   // 2. 반환된 참조값을 이용 ShowTwoNumber 함수 호출 -> ShowTwoNumber함수는 참조값을 반환
};														   // 3. 반환된 참조값을 이용 Adder 함수 호출.....