#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "test.h"


// ��ʽ1�����߱����� show��������c���Է�ʽ ������
// ֻ��Ҫʵ��c�ļ���������Ҫh�ļ�����Ȼ�ᱨ��
//extern "C" void show();

void test01()
{
	//_Z4showv;��C++���к������ػ����κ�����������show��c�����ļ����������ʧ��
	show(); 
}




int main()
{
	cout << "hello world!" << endl;

	return EXIT_SUCCESS;

}