#include<iostream>
using namespace std;

/*
  -C++에서는 멤버변수와 멤버함수에 static 선언을 추가할 수 있다.

  C언어에서의 static

  * 전역변수에 선언된 static의 의미  ->  선언된 파일 내에서만 참조를 허용
  * 함수 내에 선언된 static의 의미	 ->  한번만 초기화되고, 지역변수와 달리 함수를 빠져나가도 존재

*/
void Counter()
{
	static int cnt;						// static이 없다면 1만 10번, static이 존재하므로 1~10까지 출력
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