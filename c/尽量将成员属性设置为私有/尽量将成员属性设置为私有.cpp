#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>


//����Ա���Զ�����Ϊ˽�кô����Լ����Կ��ƶ�дȨ��
//���Զ��������� ����Ч����֤

class Person
{
private:
	string m_Name; // �ɶ�д
	int m_Age = 10;   // �ɶ���д
	string m_Lover;   // ֻд

// API
public:
	void setName(string name)
	{
		m_Name = name;
	}

	string getName()
	{
		return m_Name;
	}

	int getAge()
	{
		return m_Age;
	}

	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			cout << "�����������" << endl;
			return;
		}
		m_Age = age;
	}

	void setLover(string lover)
	{
		m_Lover = lover;
	}

};


void test01()
{
	Person p;
	p.setName("zhang san");    // ���Խ�char * ��ʽ����ת��Ϊ string    
	cout << "������ " << p.getName() << endl;

	//��ȡ����
	p.setAge(100);
	cout << "���䣺 " << p.getAge() << endl;

	//��������
	p.setLover("jin");

	//cout << "���������ǣ�"<< p.m_Lover <<endl; //������ֻдȨ��  �ⲿ���ʲ���

}





int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}