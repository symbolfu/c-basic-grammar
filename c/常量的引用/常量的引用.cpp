#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


void test01()
{
	// // ����const֮��  �൱��д��   int temp = 10;  const int &ref = temp;
	const int& ref = 10;
	//int& ref = 10;    // error: ���������ܸ�������


	//ref = 10000         // error: �����޸�
	int* p = (int*)&ref;
	*p = 100000000;

	cout << ref << endl;

}


//�������õ�ʹ�ó��� ���κ����е��βΣ���ֹ�����
void showValue(const int& a)
{
	//a = 10000;  // error: �����޸�
	cout << "a = " << a << endl;
}

void test02()
{
	int a = 100;
	showValue(a);
}





int main()
{
	cout << "hello world!" << endl;
	test01();
	test02();

	return EXIT_SUCCESS;

}