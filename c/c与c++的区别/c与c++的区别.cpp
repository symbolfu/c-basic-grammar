#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


// 1��ȫ�ֱ��������ǿ
//int a = 10;
//int a;      // ���ض���


//int a;
//int a = 10;   // ���ض���

int a = 10;

// 2�������������ǿ�� ����ֵû�м��  �β�����û�м��   �������ò�������û�м��
int genRectS(int w, int h)
{
	return w * h;
}

void test01()
{
	printf("%d\n", genRectS(10, 10));
}


// 3�� ����ת�������ǿ
void test02()
{
	char* p = (char*)malloc(64);
}


// 4��struct��ǿ�� c++���Էź����������ṹ����������Լ򻯹ؼ���struct
struct Person
{
	int age;
	void func()
	{
		age++;
	}
};

void test03()
{
	Person p;
	p.age = 20;
	p.func();

	cout << "p��age = " << p.age << endl;

}

// 5�� bool������չ�� C������ û���������  C++��bool����
bool flag = true; // bool���� ����  ��ͼ�   true  ---- ��(1)    false  ---- ��(0)

void test04()
{
	cout << sizeof(bool) << endl;
	flag = false;
	//flag = 100;    //����0������תΪ1
	cout << flag << endl;
}

// 6�� ��Ŀ�������ǿ
void test05()
{
	int a = 10;
	int b = 200;
	
	printf("ret = %d\n", a > b ? a : b);
	(a < b ? a : b) = 100; // C++�·��ص��Ǳ���  b = 100

	printf("a = %d\n", a);
	printf("b = %d\n", b);

}

// 7��const ��ǿ
// ȫ��const 
const int m_A = 100; // �ܵ������������������޸�ʧ��

void test06()
{
	//m_A = 200;
	//int* p = (int*)&m_A;

	//*P = 200;

	// �ֲ�const
	const int m_B = 200; //���䵽ջ��
	//m_B = 200; //error
	int* p = (int*)&m_B;
	*p = 200;
	cout << "m_B = " << m_B << endl;

	//C++��const���εı��� ��Ϊ���� �����Գ�ʼ������
	// ��C������ const��α�����������Գ�ʼ������
	int arr[m_B];


}


int main()
{
	cout << "hello world!" << endl;
	cout << "a = " << a << endl;
	//test01();
	//test03();
	//test04();
	//test05();
	test06();

	return EXIT_SUCCESS;

}