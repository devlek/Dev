#include<iostream>
#include<cstring>
#include"Car.h"
using namespace std;
using namespace CAR_CONST;
void Car::InitMember(char *ID, int fuel)
{
	strcpy_s(gameID, sizeof(gameID), ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState()
{
	cout << "������ID: " << gameID << endl;
	cout << "�� �� ��: " << fuelGauge<<"%" << endl;
	cout << "����ӵ�: " << curSpeed<<"km/h" << endl<<endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0) return;
	else fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD){
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;	
}

void Car::Break() {
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}