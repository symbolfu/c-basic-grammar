#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//6����Ŀ�������ǿ
void test04()
{
	//?:
	int a = 10;
	int b = 20;

	printf("retc = %d\n", a > b ? a : b);

	(a > b ? a : b) = 100;  //C������ ���ص���ֵ  20 = 100

	printf("a = %d\n", a);
	printf("b = %d\n", b);

}


int main()
{
	test04();

	system("pause");
	return 0;
}