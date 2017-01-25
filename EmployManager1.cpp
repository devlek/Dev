#include<iostream>
#include<cstring>
using namespace std;

/*
* 상속: 기존의 클래스를 재활용
*/


// 데이터적 성격이 강한 클래스
class PermanentWorker
{
private:
	char name[100];
	int salary;

public:
	PermanentWorker(char* name, int money)			// 생성자
		:salary(money)
	{
		strcpy_s(this->name,sizeof(name),name);
	}


	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl;
	}
};

// 기능의 처리를 실제로 담당하는 클래스 -> 핸들러(컨트롤) 클래스
class EmployeeHandler
{
private:
	PermanentWorker* empList[50];
	int empNum;

public:
	EmployeeHandler() : empNum(0) {}

	void AddEmployee(PermanentWorker* emp)
	{
		cout << empNum << endl;
		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

// 상속의 필요성 발생. 상속없이 새로운 직군이 추가되면 핸들러 클래스를 건들여야됨.

int main(void)
{
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();
	return 0;
}