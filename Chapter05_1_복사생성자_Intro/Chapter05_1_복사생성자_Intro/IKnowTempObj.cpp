#include<iostream>
using namespace std;
// * ��ȯ�� �� ������� ��ü�� ���� �������?
// �ӽð�ü�� ���� ������ �Ѿ�� �ٷ� �Ҹ�Ǿ� ������.
// �����ڿ� �����Ǵ� �ӽð�ü�� �ٷ� �Ҹ���� �ʴ´�.
class Temporary
{
private:
	int num;
public:
	Temporary(int n) :num(n)					
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is" << num << endl;
	}
};

int main(void)
{
	Temporary(100);									// �ӽ� ��ü ���� ����
	cout << "******* after make!" << endl << endl;

	Temporary(200).ShowTempInfo();					// �ӽ� ��ü ���� �� �Լ� ȣ��
	cout << "******* after make!" << endl << endl;

	const Temporary &ref = Temporary(300);			// ref�� �ӽð�ü ����
	cout << "******* end of main!" << endl << endl;
	return 0;
}