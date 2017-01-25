#include<iostream>
using namespace std;
/*

 * protected로 선언된 멤버가 허용하는 접근의 범위
	private < protected < public

	protected로 선언된 멤버변수는 이를 상속하는 유도클래스에서 접근이 가능하다.
	(private나 public에 비해 사용빈도는 떨어진다)


 * 상속의 세 가지 유형

 class Derived : public Base

 class Derived : private Base

 class Derived : protected Base  <- " protected보다 접근의 범위가 넓은 멤버는 protected로 변경시켜서 상속하겠다."

  * 상속은 대부분 public만 사용한다.
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
	cout << drv.num3 << endl; // num3이 protected가 되어서 외부(main)에서 곧바로 접근이 불가능하다.
	return 0;
}