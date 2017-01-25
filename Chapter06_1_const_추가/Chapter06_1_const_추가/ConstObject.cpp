#include<iostream>
using namespace std;

// * const ��ü�� const ��ü�� Ư����
// const int num=10;			<- ������ ���� ������ ���ȭ �ϵ�
// const SoSimple sim(20);		<- ������ ���� ��ü�� ���ȭ ����
// �� ��ü�� ������δ� const ����Լ��� ȣ���� �����ϴ�.
// "�� ��ü�� ������ ������ ������� �ʰڴ�!"
class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);
	//obj.AddNum(20);			// ��������� �ǵ��̹Ƿ� ������.
	obj.ShowData();
	return 0;
}