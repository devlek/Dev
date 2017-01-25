#include<iostream>
using namespace std;
/*

 * protected�� ����� ����� ����ϴ� ������ ����
	private < protected < public

	protected�� ����� ��������� �̸� ����ϴ� ����Ŭ�������� ������ �����ϴ�.
	(private�� public�� ���� ���󵵴� ��������)


 * ����� �� ���� ����

 class Derived : public Base

 class Derived : private Base

 class Derived : protected Base  <- " protected���� ������ ������ ���� ����� protected�� ������Ѽ� ����ϰڴ�."

  * ����� ��κ� public�� ����Ѵ�.
*/
class Base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;

	Base() : num1(1), num2(2), num3(3) {}
};

class Derived: protected Base {};

int main(void)
{
	Derived drv;
	cout << drv.num3 << endl; // num3�� protected�� �Ǿ �ܺ�(main)���� ��ٷ� ������ �Ұ����ϴ�.
	return 0;
}