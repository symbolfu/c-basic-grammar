#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


void test01()
{
	// // 加了const之后，  相当于写成   int temp = 10;  const int &ref = temp;
	const int& ref = 10;
	//int& ref = 10;    // error: 字面量不能赋给引用


	//ref = 10000         // error: 不可修改
	int* p = (int*)&ref;
	*p = 100000000;

	cout << ref << endl;

}


//常量引用的使用场景 修饰函数中的形参，防止误操作
void showValue(const int& a)
{
	//a = 10000;  // error: 不可修改
	cout << "a = " << a << endl;
}

void test02()
{
	int a = 100;
	showValue(a);
}





int main()
{
	cout << "hello world!" << endl;
	test01();
	test02();

	return EXIT_SUCCESS;

}