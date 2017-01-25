#include<iostream>
using namespace std;
// * 반환할 때 만들어진 객체는 언제 사라질까?
// 임시객체는 다음 행으로 넘어가면 바로 소멸되어 버린다.
// 참조자에 참조되는 임시객체는 바로 소멸되지 않는다.
class Temporary
{
private:
	int num;
public:
	Temporary(int n) :num(n)					
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is" << num << endl;
	}
};

int main(void)
{
	Temporary(100);									// 임시 객체 직접 생성
	cout << "******* after make!" << endl << endl;

	Temporary(200).ShowTempInfo();					// 임시 객체 생성 후 함수 호출
	cout << "******* after make!" << endl << endl;

	const Temporary &ref = Temporary(300);			// ref로 임시객체 참조
	cout << "******* end of main!" << endl << endl;
	return 0;
}