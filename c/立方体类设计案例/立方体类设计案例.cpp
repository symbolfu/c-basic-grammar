#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;



class Cube
{
public:
	void setL(int l)
	{
		m_L = l;
	}

	void setW(int w)
	{
		m_W = w;
	}

	void setH(int h)
	{
		m_H = h;
	}

	int getL()
	{
		return m_L;
	}

	int getW()
	{
		return m_W;
	}

	int getH()
	{
		return m_H;
	}

	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}

	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	bool compareCubeByClass(Cube& c)
	{
		return m_L == c.getL() && m_W == c.getW() && m_H == c.getH();
	}

private:
	int m_L;
	int m_W;
	int m_H;
};




void test01()
{
	Cube c1;
	bool ret;

	c1.setL(15);
	c1.setW(10);
	c1.setH(20);

	cout << "c1面积为： " << c1.calculateS() << endl; //600
	cout << "c1体积为： " << c1.calculateV() << endl; //1000

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	ret = c1.compareCubeByClass(c2);

	if (ret)
	{
		cout << "成员函数判断：c1 与 c2 相等" << endl;
	}
	else
	{
		cout << "成员函数判断：c1 与 c2 不相等" << endl;
	}

}



int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}