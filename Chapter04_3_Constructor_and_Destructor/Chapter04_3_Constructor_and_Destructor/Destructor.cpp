#include <iostream>
#include <cstring>
using namespace std;
// �Ҹ����� ���ؿ� Ȱ��
//
//��ü ������ ȣ��Ǵ� ��-> ������
//��ü �Ҹ�� ȣ��Ǵ� ��-> �Ҹ���
//�Ҹ����� ����: �����ڿ��� �Ҵ��� ���ҽ��� �Ҹ�
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
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
//---------------------------------------�Ҹ���----------------------------------------------//
	~Person()	// Ŭ���� �̸� �տ� '~'�� �ٴ� ���� �Ҹ���
				// ��ȯ�� ���� -> �����ε� ��ȯ���� ����
		        // �Ű������� void������ �����. �����ε�, ����Ʈ �� ���� �Ұ���
	{
		delete[]name;		// �����ڿ��� �Ҵ��� �޸� ������ �Ҹ�
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