#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员为私有的
	int hour;
	int minute;
	int sec;
//定义public函数
public:
	//设置小时的函数
	void setHour(int sethour)
	{
		hour = sethour;
	}
	//设置分钟的函数
	void setMinute(int setminute)
	{
		minute = setminute;
	}
	//设置秒的函数
	void setSec(int setSec)
	{
		sec = setSec;
	}
	//输出时间的函数
	void getTime(Time t)
	{
		cout<<t.hour<< ":" << t.minute << ":" << t.sec << endl;
	}
};
//主函数
int main()
{
	Time t1;           //定义t1为Time类对象
	int sethour, setminute, setsec;//定义变量并提示用户输入时间
	cout << "请输入时间：" << endl;
	cin >> sethour >> setminute >> setsec;
	//调用函数输入时间
	t1.setHour(sethour);
	t1.setMinute(setminute);
	t1.setSec(setsec);
	//调用函数输出结果
	t1.getTime(t1);
	//用于储存类的属性的成员最好定义为私有，用于改变类的属性的成员定义为公有
	//工作量小的函数放在类内定义，工作量大的函数放在类外定义
	system("pause");
	return 0;
}