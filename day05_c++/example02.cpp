#include<iostream>

using namespace std;

class circl
{
	public://�ܺο��� ���� ����
		int radius;
		string color;
		
		double calcArea()
		{
			return 3.14 * radius * radius;
		}

};
int main()
{

	circl c1;//��ü ����
	c1.radius = 100;
	c1.color = "red";

	cout << "���� ����:" << c1.calcArea() << endl;

	circl c2;
	c2.radius = 200;
	c2.color = "blue";
	cout << "���� ����:" << "c2.calcArea()" << endl;

	return 0;
}