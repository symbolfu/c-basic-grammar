#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class Person
{
public:
	Person()
	{
		cout << "Person Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age)
	{
		m_Age = age;
		cout << "Person �вι��캯������" << endl;
	}

	Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "Person �������캯������" << endl;
	}

	~Person()
	{
		cout << "Person ������������" << endl;
	}

	int m_Age;
};

// ��ʽ1�� ���Ѿ������õĶ�������ʼ���µĶ���
void test01()
{
	Person p1(18);

	Person p2 = Person(p1);

	cout << "p2�����䣺" << p2.m_Age << endl;

}

// ��ʽ2��ֵ���ݵķ�ʽ��������������ֵ
void doWork(Person p)      // �ȼ��ڣ�Person p = p1;
{
}

void test02()
{
	Person p1(100);
	doWork(p1);
}

// ��ʽ3����ֵ��ʽ�����ؾֲ�����
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