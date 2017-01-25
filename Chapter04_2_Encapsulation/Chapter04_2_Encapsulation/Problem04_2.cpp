#include<iostream>
using namespace std;

class Point
{
private:
	int xpos;
    int ypos;
public:
	void Init(int x, int y) {
		xpos = x; ypos = y;
	}
	void ShowPointInfo()const {
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}
};

class circle
{
private:
	Point center;
	int rad;

public:
	void init(int x, int y, int r) {
		center.Init(x, y);
		rad = r;
	}
	void ShowCircleInfo() const
	{
		cout << "radius: " << rad << endl;
		center.ShowPointInfo();
	}
};

class Ring
{
private:
	circle inner;
	circle outter;
public:
	void Init(int x_1, int y_1, int sim_1, int x_2, int y_2, int sim_2) 
	{
		inner.init(x_1, y_1,sim_1);
		outter.init(x_2, y_2,sim_2);
	}

	void ShowRingInfo() const{
		cout << "Inner Circle Info..." << endl;
		inner.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		outter.ShowCircleInfo();
	}
};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;

}