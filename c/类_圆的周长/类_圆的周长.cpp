#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>



// ���һ���࣬��Բ���ܳ�
const double PI = 3.14;

// class + ����
// ��ʽ��2 * pi * m_R

class Circle
{
public: //����Ȩ��

	//���еĺ���  ��Ϊ ��Ա����  ��Ա����
	// ��Բ�ܳ�
	double calculateZC()
	{
		return 2 * PI * m_R;
	}

	// ���ð뾶
	void setR(int r)
	{
		m_R = r;
	}

	// ��ȡ�뾶
	int getR()
	{
		return m_R;
	}

	//���еı���   ��Ϊ��Ա����  ��Ա����
	int m_R;

};


void test01()
{
	Circle c1;
	c1.setR(10);

	//��c1Բ�ܳ�
	cout << "Բ�İ뾶Ϊ�� " << c1.getR() << endl;
	cout << "Բ���ܳ�Ϊ�� " << c1.calculateZC() << endl;

}

class Student
{
public:

	void setName(string name)
	{
		m_Name = name;
	}

	void setId(int id)
	{
		m_Id = id;
	}

	void showStudent()
	{
		cout << "������" << m_Name << " ѧ�ţ� " << m_Id << endl;
	}

	// ����
	string m_Name;
	int m_Id;
};


void test02()
{
	Student s1;
	s1.m_Name = "zhangsan";
	s1.m_Id = 1;

	cout << "������" << s1.m_Name << " ѧ�ţ� " << s1.m_Id << endl;

	Student s2;
	s2.setName("lisi");
	s2.setId(2);
	s2.showStudent();

	Student s3;
	s3.setName("wangwu");
	s3.setId(3);
	s3.showStudent();

}


int main()
{
	cout << "hello world!" << endl;
	//test01();
	test02();

	return EXIT_SUCCESS;

}