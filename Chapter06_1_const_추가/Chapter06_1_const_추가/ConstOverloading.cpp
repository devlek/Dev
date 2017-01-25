#include<iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n) {}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};
void YourFunc(const SoSimple &obj)
{
	obj.SimpleFunc();
}
int main(void)
{
	SoSimple obj1(2);
	const SoSimple obj2(7);

	obj1.SimpleFunc();		// �Ϲ� ��ü�� ������� SimpleFunc �Լ��� ȣ�� ->  �Ϲ� ����Լ� ȣ��
	obj2.SimpleFunc();		// const ��ü�� ������� SimpleFunc �Լ��� ȣ�� -> const ����Լ� ȣ��

	YourFunc(obj1);			// YourFunc�Լ��� ���޵Ǵ� ���ڸ� const �����ڷ� ����.
	YourFunc(obj2);			// -> �����ڸ� �̿��� �Լ�ȣ�� ����� const ����Լ� ȣ��
}