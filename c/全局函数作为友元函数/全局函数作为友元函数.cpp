#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class Building
{
	// 利用friend关键字让全局函数  goodGay作为本类好朋友，可以访问私有成员
	friend void goodGay(Building* building);

public:
	Building()
	{
		this->m_SittingRoom = "客厅";
		this->m_BedRoom = "卧室";
	}

public:
	string m_SittingRoom; //客厅
private:
	string m_BedRoom; //卧室
};

// 好基友全局函数  可以访问Building的私有属性;
void goodGay(Building* building)
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友正在访问：" << building->m_BedRoom << endl;
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