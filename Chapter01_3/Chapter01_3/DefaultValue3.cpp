#include<iostream>

//매개변수 디폴트 값은 오른쪽부터 채우기 가능
int BoxVolume(int length, int width = 1, int height = 1);

int main(void)
{
	//함수의 매개변수는 왼쪽부터 채워짐.
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
//	std::cout << "[D, D, D] : " << BoxVolume() << std::endl; 최소 매개변수가 하나 필요
	return 0;

}

int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}