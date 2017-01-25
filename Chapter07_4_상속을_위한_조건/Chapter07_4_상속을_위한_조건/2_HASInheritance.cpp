#include<iostream>
#include<cstring>
using namespace std;

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum) {}
	void Shut()
	{
		cout << "BBANG!";
		bullet--;
	}
};

class Police : public Gun
{
private:
	int handcuffs;
	Gun *pistol;
public:
	Police(int bnum, int bcuff)
		: handcuffs(bcuff)
	{
		if (bnum > 0)
			pistol = new Gun(bnum);
		else
			pistol = NULL;
	}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}

	void Shot()
	{
		if (pistol == NULL) cout << "Hut BBANG" << endl;
		else pistol->Shut();
	}
	~Police()
	{
		if (pistol != NULL) delete pistol;
	}
};

int main(void)
{}