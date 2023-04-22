#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


namespace KingGlory
{
	int sunwukongId = 1;
}

namespace LOL
{
	int sunwukongId = 3;
}

void test01()
{
	// ����������������ͬʱʹ��using����ͬһ��������ʱ���ᵼ�±���error���������
	int sunwukongId = 2;
	// 1��using����
	//using KingGlory::sunwukongId;
	cout << sunwukongId << endl;
}


void test02()
{
	// 2��using����ָ��
	using namespace KingGlory;
	using namespace LOL;
	// error: �޷�֪�����ĸ���ı�������Ҫ������������
	//cout << sunwukongId << endl;

	cout << KingGlory::sunwukongId << endl;
	cout << LOL::sunwukongId << endl;

}



namespace A
{
	// using����������������
	// ��������ռ����һ������ͬ�������صĺ���������������ݺ������÷�ʽȥ����
	void func()
	{
		cout << "func1" << endl;
	}
	void func(int x)
	{
		cout << "func2" << endl;
	}
	int func(int x, int y)
	{
		cout << "func3" << endl;
		return 1;
	}
}


void test03()
{
	using namespace A;
	func();
	func(1);
	func(1, 2);
}


int main()
{
	cout << "hello world!" << endl;
	test01();
	test02();
	test03();



	return EXIT_SUCCESS;

}