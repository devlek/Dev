#include <iostream>
#include <cstring>
using namespace std;
// 소멸자의 이해와 활용
//
//객체 생성시 호출되는 것-> 생성자
//객체 소멸시 호출되는 것-> 소멸자
//소멸자의 역할: 생성자에서 할당한 리소스의 소멸
class Person
{
private:
	char *name;
	int age;

public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name,15*sizeof(char), myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
//---------------------------------------소멸자----------------------------------------------//
	~Person()	// 클래스 이름 앞에 '~'가 붙는 것이 소멸자
				// 반환형 없음 -> 실제로도 반환하지 않음
		        // 매개변수는 void형으로 선언됨. 오버로딩, 디폴트 값 설정 불가능
	{
		delete[]name;		// 생성자에서 할당한 메모리 공간의 소멸
		cout << "called destructor!" << endl;
	}
//-------------------------------------------------------------------------------------------//
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}