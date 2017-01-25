#include<iostream>
using namespace std;
/*
* friend 선언은 언제?
연산자 오버로딩을 공부하면서 보자

* 함수의 friend 선언
전역함수를 대상으로도, 클래스의 멤버함수를 대상으로도 friend 선언이 가능
friend 선언된 함수는 자신이 선언된 클래스의 private 영역에 접근이 가능하다.

-------------------------------------함수 대상의 friend 선언-----------------------------------
*/

class Point;

class PointOP
{
private:
	int opcnt;
public:
	PointOP() : opcnt(0)
	{}

	Point PointAdd(const Point&, const Point&);			// Point가 클래스의 이름임을 컴파일러에게 알려줌
	Point PointSub(const Point&, const Point&);			// Point 클래스는 뒤에서 등장하기 때문에 별도로 Point가 클래스의 이름임을 선언
	~PointOP()
	{
		cout << "Operation times: " << opcnt << endl;
	}
};

class Point
{
private:
	int x, y;
public:
	Point(const int &xpos, const int &ypos) : x(xpos), y(ypos) {}

	friend Point PointOP::PointAdd(const Point&, const Point&);		// PointOP 클래스의 멤버함수 PointAdd, PointSub에 대해 friend 선언
	friend Point PointOP::PointSub(const Point&, const Point&);
	friend void ShowPointPos(const Point&);
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

int main(void)
{
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos2, pos1));
	return 0;
}

void ShowPointPos(const Point& pos)
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}