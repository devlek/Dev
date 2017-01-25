#include<iostream>
#include<cstring>
using namespace std;

// ��ü �迭
// ��ü ����� �迭
// SoSimple arr[10];
// �������� �Ҵ��ϴ� ���
// SoSimple *ptrArr=new SoSimple[10];
// �̷��� ���·� �迭�� �����ϸ�, �� ���� SoSimple ��ü�� �𿩼� �迭�� �����ϴ� ���°� ��.
// �迭�� �����ϴ� ��쿡�� �����ڴ� ȣ���.
// but �迭�� ������������� ȣ���� �����ڸ� ������ ������� ���Ѵ�.(�����ڿ� ���ڸ� �������� ���Ѵ�)
// ���� ���·� �迭�� �����Ƿ��� ���� ������ �����ڰ� �ݵ�� ���ǵǾ� �־�� �Ѵ�.
// SoSimple() {. . . .}
// �迭���� �� ������ ��Ҹ� ����ڰ� ���ϴ� ������ �ʱ�ȭ�ϱ� ���Ѵٸ� ������ �ʱ�ȭ�� ������ �ʿ�.

class Person
{
private:
	char* name;         // name�� ������-> ũ�� 4
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}

	void SetPersonInfo(char *myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << ", ";
		cout << "����: " << age << endl;
	}

	~Person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person parr[3];
	char namestr[100];
	char* strptr;         //  strptr�� ������ -> ũ�� 4
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "�̸�: ";
		cin >> namestr;
		cout << "����: ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy_s(strptr,len ,namestr);
		parr[i].SetPersonInfo(strptr, age);

	}
	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();
	return 0;
}

// ������: ��ü �迭 ������ void�� �����ڰ� ȣ���.
// �迭 �Ҹ�ÿ��� �� �迭�� �����ϴ� ��ü�� �Ҹ��ڰ� ȣ���.