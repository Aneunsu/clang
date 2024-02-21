#include<iostream>

using namespace std;
void print(int n)
{
	cout << "정수 출력:" << n << endl;
}
void print(double j)
{
	cout << "실수 출력:" << j << endl;
}
void print(char g)
{
	cout << "문자 출력:" << g << endl;
}
int main()
{
	print(100);
	print(3.14);
	print('c');

	return 0;
}