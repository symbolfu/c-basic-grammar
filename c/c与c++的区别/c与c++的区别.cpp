#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


// 1、全局变量检测增强
//int a = 10;
//int a;      // 报重定义


//int a;
//int a = 10;   // 报重定义

int a = 10;


int main()
{
	cout << "hello world!" << endl;
	cout << "a = " << a << endl;

	return EXIT_SUCCESS;

}