//student.h
#pragma once
#include<iostream>
#include<string>
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value();
private:			//˽�ó�Ա����ԭ������
	int num;
	char name[20];
	char sex;
};
