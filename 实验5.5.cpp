#include<iostream>
using namespace std;
//����Point��
class Point
{
private://����˽�����ݳ�Ա
	int m_x;
	int m_y;
public://���幫�г�Ա����
//�����вι��캯��
	Point(int x,int y)
	{
		m_x = x;
		m_y = y;
	}
//����setPoint����
	void setPoint(int i, int j)
	{
		m_x += i;
		m_y += j;
	}
//����display����
	void display()
	{
		cout << "�޸ĺ������Ϊ��" << "(" << m_x << "," << m_y << ")" << endl;
	}
};
int main()
{
	//�ù��캯����ʼ��p1
	Point p1(60, 80);
	//����setPoint�����޸�����
	p1.setPoint(20, 20);
	//����display��������޸ĺ������
	p1.display();
	system("pause");
	return 0;
}