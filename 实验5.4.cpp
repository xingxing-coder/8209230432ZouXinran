#include<iostream>
using namespace std;
//定义Student类
class Student
{
	//定义公有数据成员
public:
	int studentID;
	int m_score;
};
//定义计算最高学生成绩的函数
void max(Student* student)
{
	int maxScore = 0;
	int maxIndex = 0;
	for (int i = 1; i < 5; i++)
	{
		if (student[i].m_score > maxScore)
		{
			maxScore = student[i].m_score;
			maxIndex = i;
		}
	}
	cout << "最高成绩的学生学号为：" <<student[maxIndex].studentID<<endl;
}
//主函数
int main()
{
	//定义Student类数组
	Student student[5];
	//提示键盘输入学生学号和成绩
	cout << "请输入五个学生的学号：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> student[i].studentID;
	}
	cout << "请输入五个学生的成绩：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> student[i].m_score;
	}
	//调用函数计算
	max(student);
	system("pause");
	return 0;
}