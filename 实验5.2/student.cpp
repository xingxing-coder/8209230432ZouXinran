//student.cpp
#include <iostream>
#include"student.h" //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout<< "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
//�����ⶨ��set_value�ຯ��
void Student::set_value()
{
    cout << "������ѧ�ţ�" << endl;
    cin >> num;
    cout << "������������" << endl;
    cin >> name;
    cout << "�������Ա�" << endl;
    cin >> sex;
}