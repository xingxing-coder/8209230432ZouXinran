#include<iostream>
using namespace std;
//����Cube��
class Cube
{
	//����˽�����ݳ�Ա
private:
	int m_length;
	int m_height;
	int m_width;
	//���幫�к�����Ա
public:
	//���ó��ĺ���
	void setLength(int length)
	{
		m_length = length;
	}
	//���øߵĺ���
	void setHeight(int height)
	{
		m_height = height;
	}
	//���ÿ�ĺ���
	void setWidth(int width)
	{
		m_width = width;
	}
	//������������ĺ���
	int calculateV();
	//�����������ĺ���
	void getV();
};
//����ֱ�д����������������ĺ�������
int Cube::calculateV()
{
	int V = m_length * m_width * m_height;
	return V;
}
void Cube::getV()
{
	cout << "����������Ϊ��" << calculateV()<< endl;
}

int main()
{
	Cube cube1;//����cube1ΪCube����
	int l, h, w;//���峤�����߱���
	//��ʾ���볤������
	cout << "�����볤����ĳ������ߣ�" << endl;
	cin >> l >> w >> h;
	//�������ó������ߵĺ���
	cube1.setLength(l);
	cube1.setWidth(w);
	cube1.setHeight(h);
	//���ü�������ĺ���
	cube1.calculateV();
	//�����������ĺ���
	cube1.getV();
	system("pause");
	return 0;
}
