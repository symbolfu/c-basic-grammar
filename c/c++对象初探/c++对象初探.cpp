#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class Person
{
public:
	//int m_A;  //只有非静态成员变量  属于类对象上
	
	void func()
	{

	}

	static int m_B;
	static void func2()
	{

	}

	//double m_C;

};

int Person::m_B = 0;

void test01()
{
	//空类的sizeof结果是1  原因  每个对象都应该在内存上有独一无二的地址，因此给空对象分配1个字节空间
	Person p1;
	cout << sizeof(p1) << endl;
}


int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}