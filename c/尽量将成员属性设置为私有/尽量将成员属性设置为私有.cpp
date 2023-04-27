#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>


//将成员属性都设置为私有好处：自己可以控制读写权限
//可以对设置内容 加有效性验证

class Person
{
private:
	string m_Name; // 可读写
	int m_Age = 10;   // 可读可写
	string m_Lover;   // 只写

// API
public:
	void setName(string name)
	{
		m_Name = name;
	}

	string getName()
	{
		return m_Name;
	}

	int getAge()
	{
		return m_Age;
	}

	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			cout << "你这个老妖精" << endl;
			return;
		}
		m_Age = age;
	}

	void setLover(string lover)
	{
		m_Lover = lover;
	}

};


void test01()
{
	Person p;
	p.setName("zhang san");    // 可以将char * 隐式类型转换为 string    
	cout << "姓名： " << p.getName() << endl;

	//获取年龄
	p.setAge(100);
	cout << "年龄： " << p.getAge() << endl;

	//设置情人
	p.setLover("jin");

	//cout << "张三情人是："<< p.m_Lover <<endl; //情人是只写权限  外部访问不到

}





int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}