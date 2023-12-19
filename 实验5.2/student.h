//student.h
#pragma once
#include<iostream>
#include<string>
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value();
private:			//私用成员变量原型声明
	int num;
	char name[20];
	char sex;
};
