#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


namespace KingGlory
{
	int sunwukongId = 1;
}

namespace LOL
{
	int sunwukongId = 3;
}

void test01()
{
	// 函数体内有声明，同时使用using引入同一个变量名时，会导致编译error：多次声明
	int sunwukongId = 2;
	// 1、using声明
	//using KingGlory::sunwukongId;
	cout << sunwukongId << endl;
}


void test02()
{
	// 2、using编译指令
	using namespace KingGlory;
	using namespace LOL;
	// error: 无法知道是哪个域的变量，需要加作用域区别
	//cout << sunwukongId << endl;

	cout << KingGlory::sunwukongId << endl;
	cout << LOL::sunwukongId << endl;

}



namespace A
{
	// using声明碰到函数重载
	// 如果命名空间包含一组用相同名字重载的函数，编译器会根据函数调用方式去区别
	void func()
	{
		cout << "func1" << endl;
	}
	void func(int x)
	{
		cout << "func2" << endl;
	}
	int func(int x, int y)
	{
		cout << "func3" << endl;
		return 1;
	}
}


void test03()
{
	using namespace A;
	func();
	func(1);
	func(1, 2);
}


int main()
{
	cout << "hello world!" << endl;
	test01();
	test02();
	test03();



	return EXIT_SUCCESS;

}