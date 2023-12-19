#include<iostream>
using namespace std;
//定义Point类
class Point
{
private://定义私有数据成员
	int m_x;
	int m_y;
public://定义公有成员函数
//定义有参构造函数
	Point(int x,int y)
	{
		m_x = x;
		m_y = y;
	}
//定义setPoint函数
	void setPoint(int i, int j)
	{
		m_x += i;
		m_y += j;
	}
//定义display函数
	void display()
	{
		cout << "修改后的坐标为：" << "(" << m_x << "," << m_y << ")" << endl;
	}
};
int main()
{
	//用构造函数初始化p1
	Point p1(60, 80);
	//调用setPoint函数修改坐标
	p1.setPoint(20, 20);
	//调用display函数输出修改后的坐标
	p1.display();
	system("pause");
	return 0;
}