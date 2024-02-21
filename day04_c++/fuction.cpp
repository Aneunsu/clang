#include<iostream>

using namespace std;
void max(int x, int y)
{
	if (x > y)
		cout<<x<<endl;
	else
		cout<<y<<endl;
}
void modify(int &x, int &y)
{
	x = x + 2;
	y = y + 2;
	cout << x << " " << y << endl;

}
int main()
{
	//매개변수를 입력받아서 최대값 출력하는 프로그램
	int a = 2, b = 3;
	max(a, b);	//최대값 출력
	modify(a, b); //값의 변화

	cout << a << " " << b << endl;
	return 0;

}