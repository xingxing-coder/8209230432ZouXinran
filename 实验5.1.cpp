#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:             // ���ݳ�ԱΪ˽�е�
	int hour;
	int minute;
	int sec;
//����public����
public:
	//����Сʱ�ĺ���
	void setHour(int sethour)
	{
		hour = sethour;
	}
	//���÷��ӵĺ���
	void setMinute(int setminute)
	{
		minute = setminute;
	}
	//������ĺ���
	void setSec(int setSec)
	{
		sec = setSec;
	}
	//���ʱ��ĺ���
	void getTime(Time t)
	{
		cout<<t.hour<< ":" << t.minute << ":" << t.sec << endl;
	}
};
//������
int main()
{
	Time t1;           //����t1ΪTime�����
	int sethour, setminute, setsec;//�����������ʾ�û�����ʱ��
	cout << "������ʱ�䣺" << endl;
	cin >> sethour >> setminute >> setsec;
	//���ú�������ʱ��
	t1.setHour(sethour);
	t1.setMinute(setminute);
	t1.setSec(setsec);
	//���ú���������
	t1.getTime(t1);
	//���ڴ���������Եĳ�Ա��ö���Ϊ˽�У����ڸı�������Եĳ�Ա����Ϊ����
	//������С�ĺ����������ڶ��壬��������ĺ����������ⶨ��
	system("pause");
	return 0;
}