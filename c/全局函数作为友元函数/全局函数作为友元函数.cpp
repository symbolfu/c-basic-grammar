#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class Building
{
	// ����friend�ؼ�����ȫ�ֺ���  goodGay��Ϊ��������ѣ����Է���˽�г�Ա
	friend void goodGay(Building* building);

public:
	Building()
	{
		this->m_SittingRoom = "����";
		this->m_BedRoom = "����";
	}

public:
	string m_SittingRoom; //����
private:
	string m_BedRoom; //����
};

// �û���ȫ�ֺ���  ���Է���Building��˽������;
void goodGay(Building* building)
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(&building);
}


int main()
{
	cout << "hello world!" << endl;
	test01();

	return EXIT_SUCCESS;

}