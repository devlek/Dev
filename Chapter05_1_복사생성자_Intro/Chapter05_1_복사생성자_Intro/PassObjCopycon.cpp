#include<iostream>
using namespace std;

// 복사생성자의 호출시점
// 1. 기존에 생서된 객체를 이용해서 새로운 객체를 초기화하는 경우
// 2. Call-by-Value 방식의 함수호출 과정에서 객체를 인자로 전달하는 경우 <-이번것
// 3. 객체를 반환하되, 참조형으로 반환하지 않는 경우

// * 할당 이후, 복사 생성자를 통한 초기화
//
class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj);            // 함수를 호출하면서 객체 obj를 전달 
	cout << "함수호출 후" << endl;
	return 0;
}