#include<iostream>
#include<cstring>
using namespace std;

/*

 * ����� ���� �⺻ ������ IS-A ������ ����


*/
class Computer
{
private:
	char owner[50];
public:
	Computer(char* name)
	{
		strcpy_s(owner, sizeof(owner), name);
	}
	void Calculate()
	{
		cout << "��û ������ ����մϴ�." << endl;
	}
};

class NotebookComp : public Computer
{
private:
	int battary;
public:
	NotebookComp(char* name, int initChag) : Computer(name), battary(initChag) {}

	void Charging() { battary += 5; }
	void UseBattary() { battary -= 1; }
	void MovingCal()
	{
		if (GetBattaryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattary();
	}
	int GetBattaryInfo() { return battary; }
};

class TableNotebook : public NotebookComp
{
private:
	char regstPenModel[50];
public:
	TableNotebook(char* name, int initChag, char* pen) : NotebookComp(name, initChag)
	{
		strcpy_s(regstPenModel, sizeof(regstPenModel), pen);
	}
	void Write(char* penInfo)
	{
		if (GetBattaryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "��ϵ� ���� �ƴմϴ�.";
			return;
		}
		cout << "�ʱ� ������ ó���մϴ�." << endl;
		UseBattary();
	}
};

int main(void)
{
	NotebookComp nc("�̼���", 5);
	TableNotebook tn("������", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}