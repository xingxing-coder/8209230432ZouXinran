//main.cpp
#include <iostream>             //��������ͷ�ļ���������
#include"student.h"
using namespace std;
int main()
{
	Student stud;                //�������
	stud.set_value();			//ִ��stud�����set_value����
	stud.display();              //ִ��stud�����display����
	system("pause");
	return 0;
}