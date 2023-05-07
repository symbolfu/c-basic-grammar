#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class ChairMan
{
public:
	static ChairMan* getInstance()
	{
		return singleMan;
	}

private:
	//�����캯��˽�л��������Դ����������,�ⲿ���ɵ��ã�
	ChairMan() {};

	ChairMan(const ChairMan&) {};

private:
	// ˽�л��������ṩֻ���ӿ�
	static ChairMan* singleMan;  //��������  �����ʼ��
};

ChairMan* ChairMan::singleMan = new ChairMan;

void test01()
{

	ChairMan* c1 = ChairMan::getInstance();
	ChairMan* c2 = ChairMan::getInstance();

	if (c1 == c2)
	{
		cout << "c1 = c2" << endl;
	}
	else
	{
		cout << "c1 != c2" << endl;
	}

}


int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}