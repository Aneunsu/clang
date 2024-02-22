#include<iostream>
#include<windows.h>
using namespace std;

class circle
{
public:
	int x, y, radius;
	string color;

	double calcArea()
	{
		return 3.14 * radius * radius;

	}
	void draw()
	{
		//cout<<"원을 출력했습니다"<<endl;

		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
		
	}
};

int main()
{
	circle c;
	c.x = 100;//x좌표
	c.y = 100;
	c.radius = 50;

	c.draw();

}