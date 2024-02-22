#include<iostream>

using namespace std;

class circl
{
	public://외부에서 접근 가능
		int radius;
		string color;
		
		double calcArea()
		{
			return 3.14 * radius * radius;
		}

};
int main()
{

	circl c1;//객체 생성
	c1.radius = 100;
	c1.color = "red";

	cout << "원의 면적:" << c1.calcArea() << endl;

	circl c2;
	c2.radius = 200;
	c2.color = "blue";
	cout << "원의 면적:" << "c2.calcArea()" << endl;

	return 0;
}