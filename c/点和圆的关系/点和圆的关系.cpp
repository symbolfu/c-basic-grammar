#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "point.h"
#include "circle.h"




void test01()
{
	Point p;
	p.setX(10);
	p.setY(9);

	Circle c;
	Point pCenter;
	pCenter.setX(10);
	pCenter.setY(0);
	c.setCenter(pCenter);
	c.setR(10);

	//isInCircle(c, p);

	c.isInCircleByClass(p);

}



int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}