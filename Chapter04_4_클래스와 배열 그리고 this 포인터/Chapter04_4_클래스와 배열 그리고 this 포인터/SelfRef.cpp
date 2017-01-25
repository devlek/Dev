#include<iostream>
using namespace std;

// * Self-Reference�� ��ȯ
// Self-Reference: ��ü �ڽ��� ������ �� �ִ� ������
// -> this�����͸� �̿��ؼ� ��ü�� �ڽ��� ������ ����� �� �ִ� �������� ��ȯ���� ����

class SelRef
{
private:
	int num;

public:					
	SelRef(int n) : num(n)				// ������ ��ü ������ �Բ� num�� �� �ְ� ����Ȯ�����
	{
		cout << "��ü����" << endl;
	}

	SelRef& Adder(int n)				//  SelRef&(����� ��ȯ��) and *this(��ȯ�� ����) �ָ�
	{									
		num += n;
		return *this;					//  *this -> ��ü �ڽ��� ������ x -> ��ü �ڽ��� ��ȯ�ϴ� �ǹ� o
	}									// ��ȯ���� ������ SelRef&�� ����Ǿ����Ƿ�
										// ��ü �ڽ��� ������ �� �ִ� '������ ����'�� ��ȯ��.
	SelRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}

};

int main(void)
{
	SelRef obj(3);					// SelRef ��ü obj ����  num=3���� �ʱ�ȭ
	SelRef &ref = obj.Adder(2);     // obj�� Adder �Լ� ȣ�� �� �ڽ��� ���� �� ��ȯ num=5.
									// ������ ref�� ��ü obj�� �����ϰ� ��

	obj.ShowTwoNumber();			// �� �ڵ忡�� �Ͼ�� ���� Ȯ���� ���ؼ�
	ref.ShowTwoNumber();			// ��ü�� ����Ǿ� �ִ� ���� ȣ��;


	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber(); // 1. ��ü ref�� Adder �Լ� ȣ�� -> Adder�Լ��� �������� ��ȯ
	return 0;											   // 2. ��ȯ�� �������� �̿� ShowTwoNumber �Լ� ȣ�� -> ShowTwoNumber�Լ��� �������� ��ȯ
};														   // 3. ��ȯ�� �������� �̿� Adder �Լ� ȣ��.....