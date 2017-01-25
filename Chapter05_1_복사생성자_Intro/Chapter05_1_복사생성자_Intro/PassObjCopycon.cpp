#include<iostream>
using namespace std;

// ����������� ȣ�����
// 1. ������ ������ ��ü�� �̿��ؼ� ���ο� ��ü�� �ʱ�ȭ�ϴ� ���
// 2. Call-by-Value ����� �Լ�ȣ�� �������� ��ü�� ���ڷ� �����ϴ� ��� <-�̹���
// 3. ��ü�� ��ȯ�ϵ�, ���������� ��ȯ���� �ʴ� ���

// * �Ҵ� ����, ���� �����ڸ� ���� �ʱ�ȭ
//
class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj(obj);            // �Լ��� ȣ���ϸ鼭 ��ü obj�� ���� 
	cout << "�Լ�ȣ�� ��" << endl;
	return 0;
}