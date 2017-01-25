#include<iostream>
#include<cstring>
using namespace std;

// *this포인터의 이해
// 멤버함수 내에서 this 이름의 포인터 사용가능 -> 객체 자신을 가리키는 용도
// 
//
class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)			// 생성자
	{
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;
	}
	void ShowSimpleData()
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()
	{
		return this;		// this를 반환 -> 이 문장을 실행하는 객체의 포인터를 반환하라는 의미 -> 반환형도 SoSimple*형
	}
};

int main(void)
{
	SoSimple sim1(100);
	SoSimple *ptr1 = sim1.GetThisPointer(); // 객체 sim1에 의해 반환된 this를 ptr1에 저장
											// this는 SoSimple의 포인터이므로 SoSimple형 포인터 변수에 저장
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple *ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}