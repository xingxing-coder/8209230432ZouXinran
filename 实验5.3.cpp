#include<iostream>
using namespace std;
//定义Cube类
class Cube
{
	//定义私有数据成员
private:
	int m_length;
	int m_height;
	int m_width;
	//定义公有函数成员
public:
	//设置长的函数
	void setLength(int length)
	{
		m_length = length;
	}
	//设置高的函数
	void setHeight(int height)
	{
		m_height = height;
	}
	//设置宽的函数
	void setWidth(int width)
	{
		m_width = width;
	}
	//声明计算体积的函数
	int calculateV();
	//声明输出体积的函数
	void getV();
};
//类外分别写计算体积和输出体积的函数主体
int Cube::calculateV()
{
	int V = m_length * m_width * m_height;
	return V;
}
void Cube::getV()
{
	cout << "长方体的体积为：" << calculateV()<< endl;
}

int main()
{
	Cube cube1;//定义cube1为Cube对象
	int l, h, w;//定义长、宽、高变量
	//提示输入长、宽、高
	cout << "请输入长方体的长、宽、高：" << endl;
	cin >> l >> w >> h;
	//调用设置长、宽、高的函数
	cube1.setLength(l);
	cube1.setWidth(w);
	cube1.setHeight(h);
	//调用计算体积的函数
	cube1.calculateV();
	//调用输出体积的函数
	cube1.getV();
	system("pause");
	return 0;
}
