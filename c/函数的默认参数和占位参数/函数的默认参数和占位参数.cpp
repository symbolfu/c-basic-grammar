#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


int func(int a, int b = 10, int c = 100)
{
	return a + b + c;
}

void test01()
{
	cout << func(20, 10) << endl;
}

// 函数的声明和实现 只能有一个 提供默认参数，不可以同时加默认参数
void myFunc(int a = 10, int b = 10);
void myFunc(int a, int b) {};



//占位参数  只写一个类型进行占位，调用时候必须要传入占位值
//占位参数 用途？ 目前没用
void func2(int a, int = 1)
{

}

void test02()
{
	func2(10);
}



int main()
{
	cout << "hello world!" << endl;
	test01();
	test02();

	return EXIT_SUCCESS;

}