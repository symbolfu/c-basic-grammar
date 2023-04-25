#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "test.h"


// 方式1：告诉编译器 show函数是用c语言方式 做链接
// 只需要实现c文件，而不需要h文件，不然会报错
//extern "C" void show();

void test01()
{
	//_Z4showv;在C++中有函数重载会修饰函数名，但是show是c语言文件，因此链接失败
	show(); 
}




int main()
{
	cout << "hello world!" << endl;

	return EXIT_SUCCESS;

}