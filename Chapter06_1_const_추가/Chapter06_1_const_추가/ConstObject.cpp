#include<iostream>
using namespace std;

// * const 객체와 const 객체의 특성들
// const int num=10;			<- 다음과 같이 변수를 상수화 하듯
// const SoSimple sim(20);		<- 다음과 같이 객체도 상수화 가능
// 이 객체를 대상으로는 const 멤버함수만 호출이 가능하다.
// "이 객체의 데이터 변경을 허용하지 않겠다!"
class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);
	//obj.AddNum(20);			// 멤버변수를 건들이므로 에러뜸.
	obj.ShowData();
	return 0;
}