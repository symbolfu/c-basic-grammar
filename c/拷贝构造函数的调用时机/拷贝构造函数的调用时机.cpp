#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class Person
{
public:
	Person()
	{
		cout << "Person 默认构造函数调用" << endl;
	}

	Person(int age)
	{
		m_Age = age;
		cout << "Person 有参构造函数调用" << endl;
	}

	Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "Person 拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person 析构函数调用" << endl;
	}

	int m_Age;
};

// 方式1： 用已经创建好的对象来初始化新的对象
void test01()
{
	Person p1(18);

	Person p2 = Person(p1);

	cout << "p2的年龄：" << p2.m_Age << endl;

}

// 方式2：值传递的方式：给函数参数传值
void doWork(Person p)      // 等价于：Person p = p1;
{
}

void test02()
{
	Person p1(100);
	doWork(p1);
}

// 方式3：以值方式，返回局部对象
Person doWork2()
{
	Person p;
	return p;
}

void test03()
{
	Person p = doWork2();
}



int main()
{
	cout << "hello world!" << endl;
	//test01();
	//test02();
	test03();

	return EXIT_SUCCESS;

}