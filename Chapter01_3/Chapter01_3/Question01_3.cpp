#include<iostream>

//�Ű����� ����Ʈ ���� �����ʺ��� ä��� ����
int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width );
int BoxVolume(int length);
int SimpleFunc(int a=10);
int SimpleFunc(void);
int main(void)
{
	//�Լ��� �Ű������� ���ʺ��� ä����.
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	std::cout << SimpleFunc(3)  << SimpleFunc() << std::endl;  // �Ű����� �ϳ��� �޴� �Լ��� �Ű������� ������ ���� �����ϸ� void�� �������̵��� �ȵ�.
	//	std::cout << "[D, D, D] : " << BoxVolume() << std::endl; �ּ� �Ű������� �ϳ� �ʿ�
	return 0;

}

int BoxVolume(int length)
{
	int height = 1, width = 1;
	return length*width*height;
}

int BoxVolume(int length, int width)
{
	int height = 1;
	return length*width*height;
}

int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}

int SimpleFunc(int a)
{
	return a + 1;

}
int SimpleFunc(void){
	return 10;
}