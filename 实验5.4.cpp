#include<iostream>
using namespace std;
//����Student��
class Student
{
	//���幫�����ݳ�Ա
public:
	int studentID;
	int m_score;
};
//����������ѧ���ɼ��ĺ���
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
	cout << "��߳ɼ���ѧ��ѧ��Ϊ��" <<student[maxIndex].studentID<<endl;
}
//������
int main()
{
	//����Student������
	Student student[5];
	//��ʾ��������ѧ��ѧ�źͳɼ�
	cout << "���������ѧ����ѧ�ţ�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> student[i].studentID;
	}
	cout << "���������ѧ���ĳɼ���" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> student[i].m_score;
	}
	//���ú�������
	max(student);
	system("pause");
	return 0;
}