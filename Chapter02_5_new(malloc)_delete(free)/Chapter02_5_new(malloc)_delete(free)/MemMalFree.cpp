#pragma warning(disable: 4996)		//strcpy �� ����ϱ� ���� pragma
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{
	//char* str = (char*)malloc(len*sizeof(char));         <- c���� ���� ���

	char* str = new char[len]; // <-c++���� ����ϴ� ���
	return str;
}


int main(void)
{
	char* str = MakeStrAdr(30);
	strcpy(str,"I am so happy");
	cout <<str<< endl;
	//free(str);		<--- c���� ����ϴ� ���
	delete[]str;
	return 0;



}