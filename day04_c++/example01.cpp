#include<iostream>

using namespace std;
void swap(int &x, int &y)	//&을 붙이면 별명을 의미함
{
	int tmp;	//임시변수

	tmp = x;
	x = y;
	y = tmp;

	cout << "x=" << x << "y=" << y << endl;
}
int main()
{
	int a = 100, b = 200;

	cout << "a=" << a << "b=" << b << endl;
	swap(a, b);

	cout << "a=" << a << "b=" << b << endl;


	return 0;
}