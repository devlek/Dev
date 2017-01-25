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

class UnivStudent : public Person	// <- Person Ŭ������ ����Ѵٴ� �ǹ�
{
private:
	char* major;
public:
	// * UnivStudent Ŭ������ �����ڴ� �ڽ��� ����� Person Ŭ������ ����� �ʱ�ȭ�� �ǹ��� ���Ѵ�.
	//   UnivStudent�� �����ڴ� Person�� �����ڸ� ȣ���ϴ� ���·� Person Ŭ������ ����� �ʱ�ȭ�ϴ� ���� ����.

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
		WhatYourName();			//	Person Ŭ������ ����߱� ������ ��ӹ��� ����Լ��� ��밡��
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