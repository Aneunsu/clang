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
	rectangle rec1;	//객체 생선(인스턴스)

	rec1.width = 30;
	rec1.height = 40;
	cout << "사각형의 넓이는: " << rec1.calcArea() << endl;



	return 0;
}