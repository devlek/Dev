#include<iostream>
//��ũ���Լ� ����: �Ϲ��Լ����� ����ӵ��� ������
//��ũ���Լ� ����: �����ϱⰡ ��ƴ�
//               : ������ �Լ��� ��ũ���� ���·� �����ϴµ� �Ѱ谡 �ִ�.

inline int SQUARE(int x)
{
	return x*x;
}

int main(void) {
	std::cout << SQUARE(5) << std::endl;	// ����Ʈ�� �ȿ��� �Լ� ȣ�� ����
	std::cout << SQUARE(12) << std::endl;
	return 0;
}