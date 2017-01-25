#include<iostream>
#include<cstring>
using namespace std;

// * 얕은복사: 디폴트 복사 생성자가 멤버 대 멤버의 복사를 진행하는 것 -> 멤버변수가 힙의 메모리 공간을 참조하는 경우 문제 발생
// * 깊은복사: 멤버뿐만 아니라 포인터로 참조하는 대상까지 깊게 복사하는 것
// 디폴트 복사 생성자의 문제점
class Person
{
private:
	char* name;
	int age;

public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}