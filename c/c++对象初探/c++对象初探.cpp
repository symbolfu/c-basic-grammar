#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class Person
{
public:
	//int m_A;  //ֻ�зǾ�̬��Ա����  �����������
	
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
	//�����sizeof�����1  ԭ��  ÿ������Ӧ�����ڴ����ж�һ�޶��ĵ�ַ����˸��ն������1���ֽڿռ�
	Person p1;
	cout << sizeof(p1) << endl;
}


int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}