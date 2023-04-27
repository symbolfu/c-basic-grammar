#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
public:
	void setR(int r);

	int getR();

	void setCenter(Point p);

	Point getCenter();

	void isInCircleByClass(Point p);

private:
	int m_R;
	Point m_Center;
};
