//student.cpp
#include <iostream>
#include"student.h" //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout<< "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
//在类外定义set_value类函数
void Student::set_value()
{
    cout << "请输入学号：" << endl;
    cin >> num;
    cout << "请输入姓名：" << endl;
    cin >> name;
    cout << "请输入性别：" << endl;
    cin >> sex;
}