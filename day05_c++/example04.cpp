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
		//cout<<"���� ����߽��ϴ�"<<endl;

		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
		
	}
};

int main()
{
	circle c;
	c.x = 100;//x��ǥ
	c.y = 100;
	c.radius = 50;

	c.draw();

}