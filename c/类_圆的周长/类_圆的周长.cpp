#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>



// 设计一个类，求圆的周长
const double PI = 3.14;

// class + 类名
// 公式：2 * pi * m_R

class Circle
{
public: //公共权限

	//类中的函数  称为 成员函数  成员方法
	// 求圆周长
	double calculateZC()
	{
		return 2 * PI * m_R;
	}

	// 设置半径
	void setR(int r)
	{
		m_R = r;
	}

	// 获取半径
	int getR()
	{
		return m_R;
	}

	//类中的变量   称为成员变量  成员属性
	int m_R;

};


void test01()
{
	Circle c1;
	c1.setR(10);

	//求c1圆周长
	cout << "圆的半径为： " << c1.getR() << endl;
	cout << "圆的周长为： " << c1.calculateZC() << endl;

}

class Student
{
public:

	void setName(string name)
	{
		m_Name = name;
	}

	void setId(int id)
	{
		m_Id = id;
	}

	void showStudent()
	{
		cout << "姓名：" << m_Name << " 学号： " << m_Id << endl;
	}

	// 属性
	string m_Name;
	int m_Id;
};


void test02()
{
	Student s1;
	s1.m_Name = "zhangsan";
	s1.m_Id = 1;

	cout << "姓名：" << s1.m_Name << " 学号： " << s1.m_Id << endl;

	Student s2;
	s2.setName("lisi");
	s2.setId(2);
	s2.showStudent();

	Student s3;
	s3.setName("wangwu");
	s3.setId(3);
	s3.showStudent();

}


int main()
{
	cout << "hello world!" << endl;
	//test01();
	test02();

	return EXIT_SUCCESS;

}