#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class Person
{
public:
	Person()
	{
		cout << "������������" << endl;
		pName = (char *)malloc(sizeof("xiaomin"));
		strcpy(pName, "xiaomin");
		mTall = 150;
		mMoney = 10;
	}


	~Person()
	{
		cout << "�����������ã�" << endl;
		if (pName != NULL)
		{
			free(pName);
			pName = NULL;
		}
	}

public:
	char* pName;
	int mTall;
	int mMoney;
};

void test01() {
	Person person;
	cout << person.pName << person.mTall << person.mMoney << endl;
}


int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}