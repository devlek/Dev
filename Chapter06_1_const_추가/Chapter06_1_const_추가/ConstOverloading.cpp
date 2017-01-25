#include<iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n) {}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};
void YourFunc(const SoSimple &obj)
{
	obj.SimpleFunc();
}
int main(void)
{
	SoSimple obj1(2);
	const SoSimple obj2(7);

	obj1.SimpleFunc();		// 일반 객체를 대상으로 SimpleFunc 함수를 호출 ->  일반 멤버함수 호출
	obj2.SimpleFunc();		// const 객체를 대상으로 SimpleFunc 함수를 호출 -> const 멤버함수 호출

	YourFunc(obj1);			// YourFunc함수는 전달되는 인자를 const 참조자로 받음.
	YourFunc(obj2);			// -> 참조자를 이용한 함수호출 결과로 const 멤버함수 호출
}