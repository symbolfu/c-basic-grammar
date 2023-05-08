#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}

	bool compareAge(Person& p)
	{
		if (this->age == p.age)
		{
			return true;
		}
		return false;
	}

	Person& personAddPerson(Person& p)
	{
		this->age += p.age;
		return *this;
	}

	int age;
};

void test01()
{
	//this指针 指向 被调用的成员函数 所属的对象
	Person p1(10);

	cout << "p1的年龄为： " << p1.age << endl;


	Person p2(10);

	bool ret = p1.compareAge(p2);
	if (ret)
	{
		cout << "p1与p2年龄相等" << endl;
	}


	p1.personAddPerson(p2).personAddPerson(p2).personAddPerson(p2); //链式编程
	cout << "p1的年龄为： " << p1.age << endl;

}




int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}