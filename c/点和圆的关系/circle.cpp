#include "circle.h"


void Circle::setR(int r)
{
	m_R = r;
}

int Circle::getR()
{
	return m_R;
}

void Circle::setCenter(Point p)
{
	m_Center = p;
}


Point Circle::getCenter()
{
	return m_Center;
}

void Circle::isInCircleByClass(Point p)
{

	int distance = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) + (m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());

	int rDistance = m_R * m_R;

	if (distance == rDistance)
	{
		cout << "��Ա�����жϣ�����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "��Ա�����жϣ�����Բ��" << endl;
	}
	else
	{
		cout << "��Ա�����жϣ�����Բ��" << endl;
	}
}



