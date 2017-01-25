#include<iostream>
using namespace std;

// 3. ��ü�� ��ȯ�ϵ�, ���������� ��ȯ���� �ʴ� ���

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};
SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return ����" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();  // �Լ��� ȣ���ϸ� ��ȯ�� �� �ӽð�ü�� ��ȯ��. �����ڰ� �ƴ�. ������ ���纻
	obj.ShowData();
	return 0;
}