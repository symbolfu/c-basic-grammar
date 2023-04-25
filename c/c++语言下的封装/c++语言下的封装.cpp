#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


// 结构体封装思路
struct Person
{
public:
	char name[64];
	int age;

	void PersonEat()
	{
		printf("%s在吃饭", name);
	}
};

struct Dog
{
public:
	char name[64];
	int age;

	void DogEat()
	{
		printf("%s吃狗粮", name);
	}
};


//C++封装 理念：  将属性和行为作为一个整体，来表现生活中的事物

//第二次理念： 将属性和行为  加以权限控制

void test01()
{
	struct Person p;
	strcpy(p.name, "laowang");
	p.PersonEat();
}



//struct和class 区别？
//class 默认权限  私有权限  而 struct默认权限是 公共权限

//访问权限
// public  公共权限    成员 类内  类外 都可以访问	 
// private 私有权限    成员 类内  可以访问  类外  不可以访问  儿子不可以访问父亲的private权限内容
// protected 保护权限  成员 类内  可以访问  类外  不可以访问  儿子可以访问父亲的protected权限内容

class Person2
{
public:
	string m_Name;

protected:
	string m_Car;

private:
	int m_pwd;


public:
	void func()
	{
		m_Name = "zhangsan";
		m_Car = "aaaaa";
		m_pwd = 1234;
	}

};



void test02()
{
	Person2 p;
	p.m_Name = "lisi";
}




int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}