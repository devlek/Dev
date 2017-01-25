#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	char* name;

public:
	Person(char* myname) 
	{	
		name = new char[strlen(myname) + 1];
		strcpy_s(name, 20, myname);
	}
	~Person()
	{
		delete[]name;
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person	// <- Person 클래스를 상속한다는 의미
{
private:
	char* major;
public:
	// * UnivStudent 클래스의 생성자는 자신이 상속한 Person 클래스의 멤버를 초기화할 의무를 지닌다.
	//   UnivStudent의 생성자는 Person의 생성자를 호출하는 형태로 Person 클래스의 멤버를 초기화하는 것이 좋다.

	UnivStudent(char* myname, char *mymajor)
		:Person(myname)
	{
		major = new char[strlen(mymajor) + 1];
		strcpy_s(major, 20, mymajor);
	}
	~UnivStudent()
	{
		delete[]major;
	}
	void WhoAreYou() const
	{
		WhatYourName();			//	Person 클래스를 상속했기 때문에 상속받은 멤버함수를 사용가능
		cout << "My major is " << major << endl;
	}
};

int main(void)
{
	UnivStudent st1("Lee", "Computer eng.");
	st1.WhoAreYou();

	UnivStudent st2("Yoon", "Electronic eng.");
	st2.WhoAreYou();
	return 0;
}