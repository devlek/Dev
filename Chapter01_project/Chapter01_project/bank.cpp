#include<iostream>

using namespace std;
void menu(void);
void input(int);
void output(int);



int main(void)
{
	int select_signal;

	while (1)
	{
		menu();
		cout << "선택: ";
		cin >> select_signal;
		cout << endl;

		switch (select_signal)
		{
		case 1:

		case 2:

		case 3:

		case 4:

		case 5:


		}


	}

}

void menu(void)
{
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	
}