#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


// 1、全局变量检测增强
//int a = 10;
//int a;      // 报重定义


//int a;
//int a = 10;   // 报重定义

int a = 10;

// 2、函数检测则增强： 返回值没有检测  形参类型没有检测   函数调用参数个数没有检测
int genRectS(int w, int h)
{
	return w * h;
}

void test01()
{
	printf("%d\n", genRectS(10, 10));
}


// 3、 类型转换检测增强
void test02()
{
	char* p = (char*)malloc(64);
}


// 4、struct增强： c++可以放函数，创建结构体变量，可以简化关键字struct
struct Person
{
	int age;
	void func()
	{
		age++;
	}
};

void test03()
{
	Person p;
	p.age = 20;
	p.func();

	cout << "p的age = " << p.age << endl;

}

// 5、 bool类型扩展： C语言下 没有这个类型  C++有bool类型
bool flag = true; // bool类型 代表  真和假   true  ---- 真(1)    false  ---- 假(0)

void test04()
{
	cout << sizeof(bool) << endl;
	flag = false;
	//flag = 100;    //将非0的数都转为1
	cout << flag << endl;
}

// 6、 三目运算符增强
void test05()
{
	int a = 10;
	int b = 200;
	
	printf("ret = %d\n", a > b ? a : b);
	(a < b ? a : b) = 100; // C++下返回的是变量  b = 100

	printf("a = %d\n", a);
	printf("b = %d\n", b);

}

// 7、const 增强
// 全局const 
const int m_A = 100; // 受到常量区保护，运行修改失败

void test06()
{
	//m_A = 200;
	//int* p = (int*)&m_A;

	//*P = 200;

	// 局部const
	const int m_B = 200; //分配到栈上
	//m_B = 200; //error
	int* p = (int*)&m_B;
	*p = 200;
	cout << "m_B = " << m_B << endl;

	//C++下const修饰的变量 称为常量 ，可以初始化数组
	// 在C语言下 const是伪常量，不可以初始化数组
	int arr[m_B];


}


int main()
{
	cout << "hello world!" << endl;
	cout << "a = " << a << endl;
	//test01();
	//test03();
	//test04();
	//test05();
	test06();

	return EXIT_SUCCESS;

}