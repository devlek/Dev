#pragma warning(disable: 4996)		//strcpy 를 사용하기 위한 pragma
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{
	//char* str = (char*)malloc(len*sizeof(char));         <- c언어에서 쓰던 방법

	char* str = new char[len]; // <-c++에서 사용하는 방법
	return str;
}


int main(void)
{
	char* str = MakeStrAdr(30);
	strcpy(str,"I am so happy");
	cout <<str<< endl;
	//free(str);		<--- c언어에서 사용하던 방법
	delete[]str;
	return 0;



}