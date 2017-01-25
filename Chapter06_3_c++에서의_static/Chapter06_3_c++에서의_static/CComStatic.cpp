#include<iostream>
using namespace std;

/*
  -C++������ ��������� ����Լ��� static ������ �߰��� �� �ִ�.

  C������ static

  * ���������� ����� static�� �ǹ�  ->  ����� ���� �������� ������ ���
  * �Լ� ���� ����� static�� �ǹ�	 ->  �ѹ��� �ʱ�ȭ�ǰ�, ���������� �޸� �Լ��� ���������� ����

*/
void Counter()
{
	static int cnt;						// static�� ���ٸ� 1�� 10��, static�� �����ϹǷ� 1~10���� ���
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
	}

	return 0;
}