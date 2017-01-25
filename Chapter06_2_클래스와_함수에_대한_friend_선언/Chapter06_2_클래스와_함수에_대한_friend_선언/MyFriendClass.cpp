#include<iostream>
#include<cstring>
using namespace std;

/*
* 클래스의 friend 선언

A클래스가 B클래스에게 friend 선언   ->  A클래스의 Private를 B클래스가 접근가능
									->	B클래스의 Private를 A클래스는 접근불가

B도 A에게 friend 선언   -> A, B 서로 Private 확인가능 
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