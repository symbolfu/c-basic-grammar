#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


//函数重载条件
//1、在同一个作用域
//2、函数名称相同
//3、参数个数、类型、顺序不同

void func()
{
	cout << "func()调用" << endl;
}

void func(int a)
{
	cout << "func(int a)调用" << endl;
}

void func(double a)
{
	cout << "func(double a)调用" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b)调用" << endl;
}

void func(int a, double b)
{
	cout << "func(int a ,double b)调用" << endl;
}



void test01()
{
	func(1, 3.14);
}

//函数重载中 引用两个版本
//void myFunc(int a)
//{
//	cout << "myfunc(int a )调用" << endl;
//}

void myFunc(const int& a) // const int &a = 10;
{
	cout << "myfunc( const int &a )调用" << endl;
}


void myFunc(int& a) // int & a  = 10;
{
	cout << "myfunc(int &a )调用" << endl;
}


void test02()
{
	//const int a = 10;
	int a = 10;
	myFunc(a);   //需要避免二义性出现

}





int main()
{
	cout << "hello world!" << endl;
	//test01();
	test02();

	return EXIT_SUCCESS;

}