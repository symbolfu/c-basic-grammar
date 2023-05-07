#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
public:
	static int m_A;

	static void func()
	{
		//m_C = 100; //静态成员函数 不能访问非静态成员变量
		m_A = 100; //静态成员函数 能访问静态成员变量
		cout << "func调用" << endl;
	}

	int m_C;

private:
	static int m_B; //私有静态成员变量 

	static void func2()
	{

	}
};

int Person::m_A = 0;
int Person::m_B = 0;

void test01()
{
	//1、通过对象进行访问
	Person p1;
	cout << p1.m_A << endl;

	Person p2;
	p2.m_A = 100;

	cout << p1.m_A << endl;

	//2、通过类名进行访问
	cout << Person::m_A << endl;

	//静态成员变量 也是有访问权限的，私有权限类外访问不到
	//cout << Person::m_B << endl;

}

void test02()
{
	//通过对象
	Person p1;
	p1.func();
	//通过类名
	Person::func();

	//Person::func2();  静态成员函数也是有访问权限的
}

class B
{
public:
	 static const int mShare = 10;

};

void test03()
{
	B b;
	b.mShare = 100;
}


int main()
{
	cout << "hello world!" << endl;
	//test01();
	//test02();
	test03();


	return EXIT_SUCCESS;

}