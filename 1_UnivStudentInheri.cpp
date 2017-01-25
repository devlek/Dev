#include<iostream>
#include<cstring>
using namespace std;
/*
* 상속이란?  ex) UnivStudent 클래스가 Person 클래스를 상속한다  ->  UnivStudent클래스는 Person 클래스의 모든 멤버를 물려받는다.
																->  즉, UnivStudent객체는 자신의 멤버뿐만 아니라 Person의 모든 멤버도 획득
*/
class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, char* myname) : age(myage)
	{
		strcpy_s(name, sizeof(name), myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person	// <- Person 클래스를 상속한다는 의미
{
private:
	char major[50];
public:
	// * UnivStudent 클래스의 생성자는 자신이 상속한 Person 클래스의 멤버를 초기화할 의무를 지닌다.
    //   UnivStudent의 생성자는 Person의 생성자를 호출하는 형태로 Person 클래스의 멤버를 초기화하는 것이 좋다.

	UnivStudent(char* myname, int myage, char *mymajor)
		:Person(myage, myname)
	{
		strcpy_s(major, sizeof(major), mymajor);
	}

	void WhoAreYou() const
	{
		WhatYourName();			//	Person 클래스를 상속했기 때문에 상속받은 멤버함수를 사용가능
		HowOldAreYou();			//
		cout << "My major is " << major << endl;
	}
};

int main(void)
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.WhoAreYou();
	return 0;
}