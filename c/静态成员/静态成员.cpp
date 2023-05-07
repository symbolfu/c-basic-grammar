#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
public:
	static int m_A;

	static void func()
	{
		//m_C = 100; //��̬��Ա���� ���ܷ��ʷǾ�̬��Ա����
		m_A = 100; //��̬��Ա���� �ܷ��ʾ�̬��Ա����
		cout << "func����" << endl;
	}

	int m_C;

private:
	static int m_B; //˽�о�̬��Ա���� 

	static void func2()
	{

	}
};

int Person::m_A = 0;
int Person::m_B = 0;

void test01()
{
	//1��ͨ��������з���
	Person p1;
	cout << p1.m_A << endl;

	Person p2;
	p2.m_A = 100;

	cout << p1.m_A << endl;

	//2��ͨ���������з���
	cout << Person::m_A << endl;

	//��̬��Ա���� Ҳ���з���Ȩ�޵ģ�˽��Ȩ��������ʲ���
	//cout << Person::m_B << endl;

}

void test02()
{
	//ͨ������
	Person p1;
	p1.func();
	//ͨ������
	Person::func();

	//Person::func2();  ��̬��Ա����Ҳ���з���Ȩ�޵�
}

class B
{
public:
	 static const int mShare = 10;

};

void test03()
{
	B b;
	b.mShare = 100;
}


int main()
{
	cout << "hello world!" << endl;
	//test01();
	//test02();
	test03();


	return EXIT_SUCCESS;

}