#include<iostream>
using namespace std;


//-----------------------------------------------------클래스---------------------------------------------------------
namespace Car_CONST
{
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	char gamerID[Car_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState();
	void Accel();
	void Break();

};

void Car::Break()
{
	if (curSpeed < Car_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= Car_CONST::BRK_STEP;
}

void Car::ShowCarState()
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연 료 량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/h" << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else fuelGauge -= Car_CONST::FUEL_STEP;

	if (curSpeed + Car_CONST::ACC_STEP >= Car_CONST::MAX_SPD)
	{
		curSpeed = Car_CONST::MAX_SPD;
		return;
	}
	curSpeed += Car_CONST::ACC_STEP;
}
//--------------------------------------여기까지 class 내부 구성요소-----------------------------------------

//---------------------------------------------------------main------------------------------------------/
int main(void)
{
	Car run99 = { "run99",100,0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77",100,0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();

	return 0;
}




