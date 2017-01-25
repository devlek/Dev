#include<iostream>
#include<cstring>
using namespace std;
/*
* ����̶�?  ex) UnivStudent Ŭ������ Person Ŭ������ ����Ѵ�  ->  UnivStudentŬ������ Person Ŭ������ ��� ����� �����޴´�.
																->  ��, UnivStudent��ü�� �ڽ��� ����Ӹ� �ƴ϶� Person�� ��� ����� ȹ��
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

class UnivStudent : public Person	// <- Person Ŭ������ ����Ѵٴ� �ǹ�
{
private:
	char major[50];
public:
	// * UnivStudent Ŭ������ �����ڴ� �ڽ��� ����� Person Ŭ������ ����� �ʱ�ȭ�� �ǹ��� ���Ѵ�.
    //   UnivStudent�� �����ڴ� Person�� �����ڸ� ȣ���ϴ� ���·� Person Ŭ������ ����� �ʱ�ȭ�ϴ� ���� ����.

	UnivStudent(char* myname, int myage, char *mymajor)
		:Person(myage, myname)
	{
		strcpy_s(major, sizeof(major), mymajor);
	}

	void WhoAreYou() const
	{
		WhatYourName();			//	Person Ŭ������ ����߱� ������ ��ӹ��� ����Լ��� ��밡��
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