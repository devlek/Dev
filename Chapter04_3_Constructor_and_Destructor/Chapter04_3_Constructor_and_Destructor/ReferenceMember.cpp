#include<iostream>
using namespace std;

// const ������ ���������� '������'�� ����� ���ÿ� �ʱ�ȭ�� �̷����� �Ѵ�.
// �̴ϼȶ������� �̿��ϸ� �����ڵ� ��������� ����� �� �ִ�.
class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;  // AAA ��ü ������ ������ �����ڰ� ȣ��Ǵ��� Ȯ���ϱ� ���ؼ� ������ ��¹�
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA &ref;					// �����ڰ� ��������� ����Ǿ��� -> �̴ϼȶ������� ���Ͽ� �ʱ�ȭ�� �Ͽ��� �Ѵ�.
	const int &num;				// const �����ڰ� ����� -> �̴ϼȶ������� ���ؼ� ������ ����� �ʱ�ȭ ����

public:
	BBB(AAA &r, const int &n)
		:ref(r), num(n)
	{ // empty construct
	}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num" << num << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}