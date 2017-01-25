#include<iostream>
#include<cstring>
using namespace std;

// 객체 배열
// 객체 기반의 배열
// SoSimple arr[10];
// 동적으로 할당하는 경우
// SoSimple *ptrArr=new SoSimple[10];
// 이러한 형태로 배열을 선언하면, 열 개의 SoSimple 객체가 모여서 배열을 구성하는 형태가 됨.
// 배열을 선언하는 경우에도 생성자는 호출됨.
// but 배열의 선언과정에서는 호출할 생성자를 별도로 명시하지 못한다.(생성자에 인자를 전달하지 못한다)
// 위의 형태로 배열이 생성되려면 다음 형태의 생성자가 반드시 정의되어 있어야 한다.
// SoSimple() {. . . .}
// 배열선언 후 각각의 요소를 사용자가 원하는 값으로 초기화하길 원한다면 일일이 초기화의 과정이 필요.

class Person
{
private:
	char* name;         // name은 포인터-> 크기 4
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}

	void SetPersonInfo(char *myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}

	~Person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person parr[3];
	char namestr[100];
	char* strptr;         //  strptr은 포인터 -> 크기 4
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy_s(strptr,len ,namestr);
		parr[i].SetPersonInfo(strptr, age);

	}
	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();
	return 0;
}

// 실행결과: 객체 배열 생성시 void형 생성자가 호출됨.
// 배열 소멸시에는 그 배열을 구성하는 객체의 소멸자가 호출됨.