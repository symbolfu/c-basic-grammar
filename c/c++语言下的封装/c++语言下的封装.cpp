#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


// �ṹ���װ˼·
struct Person
{
public:
	char name[64];
	int age;

	void PersonEat()
	{
		printf("%s�ڳԷ�", name);
	}
};

struct Dog
{
public:
	char name[64];
	int age;

	void DogEat()
	{
		printf("%s�Թ���", name);
	}
};


//C++��װ ���  �����Ժ���Ϊ��Ϊһ�����壬�����������е�����

//�ڶ������ �����Ժ���Ϊ  ����Ȩ�޿���

void test01()
{
	struct Person p;
	strcpy(p.name, "laowang");
	p.PersonEat();
}



//struct��class ����
//class Ĭ��Ȩ��  ˽��Ȩ��  �� structĬ��Ȩ���� ����Ȩ��

//����Ȩ��
// public  ����Ȩ��    ��Ա ����  ���� �����Է���	 
// private ˽��Ȩ��    ��Ա ����  ���Է���  ����  �����Է���  ���Ӳ����Է��ʸ��׵�privateȨ������
// protected ����Ȩ��  ��Ա ����  ���Է���  ����  �����Է���  ���ӿ��Է��ʸ��׵�protectedȨ������

class Person2
{
public:
	string m_Name;

protected:
	string m_Car;

private:
	int m_pwd;


public:
	void func()
	{
		m_Name = "zhangsan";
		m_Car = "aaaaa";
		m_pwd = 1234;
	}

};



void test02()
{
	Person2 p;
	p.m_Name = "lisi";
}




int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}