#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


// ���û����﷨�� ���� &���� = ԭ��
void test01()
{
	int a = 10;
	int& b = a;

	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

void test02()
{
	int a = 10;
	//int& b;    // error : ���ñ���Ҫ��ʼ��

	int& b = a;

	int c = 100;

	//����һ����ʼ���󣬾Ͳ�����������������

	b = c;   // �����Ǹ�ֵ����

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}


// �����齨������
void test03()
{
	int arr[10];

	// ���巽ʽ1��ֱ�ӽ�������
	int(&pArr)[10] = arr;

	// ���巽ʽ2�� �ȶ�����������ͣ���ͨ������ ��������
	typedef int(ARRAY_TYPE)[10];
	ARRAY_TYPE& pArr2 = arr;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = 100 + i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << pArr[i] << endl;
	}
	cout << "-----------------------------------" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << pArr2[i] << endl;
	}
}



int main()
{
	cout << "hello world!" << endl;
	//test01();
	//test02();
	test03();

	return EXIT_SUCCESS;

}