#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "game1.h"
#include "game2.h"

//1�� �����ռ�ʹ��
void test01()
{
	KingGlory::goAtk();
	LOL::goAtk();
}

//2�������ռ��£����Էű������������ṹ�塢��...
namespace A
{
	int m_A;
	void func();
	struct Person {};
	class Animal {};
}

// 3�������ռ������ȫ��������������
void test02()
{
	// namespace b {};   // error
}

// 4�� �����ռ����Ƕ�������ռ�
namespace B
{
	int m_A = 10;
	namespace C
	{
		int m_A = 20;
	}
}

void test03()
{
	cout << "b:: m_A: = " << B::m_A << endl;
	cout << "b:: c:: m_a = " << B::C::m_A << endl;
}

//5�������ռ��ǿ��ŵģ�������ʱ�������ռ�����µĳ�Ա
namespace B
{
	int m_B = 100;
}

void test04()
{
	cout << "b::m_a = " << B::m_A << endl;
	cout << "b::m_b = " << B::m_B << endl;
}

// 6�������ռ��������
namespace
{
	// ��д�������ռ�������ģ��൱��д��  static int m_C = 1000; static int m_D = 2000;
	int m_c = 1000;
	int m_d = 3000;
}

void test05()
{
	cout << "m_c = " << m_c << endl;
	cout << "m_d = " << ::m_d << endl;
}

// 7�� �����ռ���������
namespace veryLongName
{
	int m_E = 10000;
	void func()
	{
		cout << "aaa" << endl;
	}
}

void test06()
{
	namespace shortname = veryLongName;
	cout << "verylongname: " << shortname::m_E << endl;
}



int main()
{
	cout << "hello world!" << endl;
	test01();
	test03();
	test04();
	test05();
	test06();

	return EXIT_SUCCESS;

}