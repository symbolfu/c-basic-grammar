#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


//������������
//1����ͬһ��������
//2������������ͬ
//3���������������͡�˳��ͬ

void func()
{
	cout << "func()����" << endl;
}

void func(int a)
{
	cout << "func(int a)����" << endl;
}

void func(double a)
{
	cout << "func(double a)����" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b)����" << endl;
}

void func(int a, double b)
{
	cout << "func(int a ,double b)����" << endl;
}



void test01()
{
	func(1, 3.14);
}

//���������� ���������汾
//void myFunc(int a)
//{
//	cout << "myfunc(int a )����" << endl;
//}

void myFunc(const int& a) // const int &a = 10;
{
	cout << "myfunc( const int &a )����" << endl;
}


void myFunc(int& a) // int & a  = 10;
{
	cout << "myfunc(int &a )����" << endl;
}


void test02()
{
	//const int a = 10;
	int a = 10;
	myFunc(a);   //��Ҫ��������Գ���

}





int main()
{
	cout << "hello world!" << endl;
	//test01();
	test02();

	return EXIT_SUCCESS;

}