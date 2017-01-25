#include<iostream>
#include<cstring>
using namespace std;

/*
* Ŭ������ friend ����

AŬ������ BŬ�������� friend ����   ->  AŬ������ Private�� BŬ������ ���ٰ���
									->	BŬ������ Private�� AŬ������ ���ٺҰ�

B�� A���� friend ����   -> A, B ���� Private Ȯ�ΰ��� 
*/

class Girl;

class Boy
{
private:
	int height;
	friend class Girl;
public:
	Boy(int len) : height(len) {}
	void ShowYourFriendInfo(Girl &frn);
};

class Girl
{
private:
	char phNum[20];
public:
	Girl(char* num)
	{
		strcpy_s(phNum, sizeof(phNum), num);
	}
	void ShowYourFriendInfo(Boy &frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl &frn)
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy &frn)
{
	cout << "His Height: " << frn.height << endl;
}

int main(void)
{
	Boy boy(170);
	Girl girl("010 - 2285 - 2320");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}