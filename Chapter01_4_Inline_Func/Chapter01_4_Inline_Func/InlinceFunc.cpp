#include<iostream>
//매크로함수 장점: 일반함수보다 실행속도가 빠르다
//매크로함수 단점: 정의하기가 어렵다
//               : 복잡한 함수를 매크로의 형태로 정의하는데 한계가 있다.

inline int SQUARE(int x)
{
	return x*x;
}

int main(void) {
	std::cout << SQUARE(5) << std::endl;	// 프린트문 안에서 함수 호출 가능
	std::cout << SQUARE(12) << std::endl;
	return 0;
}