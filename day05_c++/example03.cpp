#include<iostream>

using namespace std;
class rectangle
{
public:
	int width, height;
	int calcArea()
	{
		return width * height;

	}
};

int main()
{
	rectangle rec1;	//��ü ����(�ν��Ͻ�)

	rec1.width = 30;
	rec1.height = 40;
	cout << "�簢���� ���̴�: " << rec1.calcArea() << endl;



	return 0;
}