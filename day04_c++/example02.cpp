#include<iostream>

using namespace std;
void print(int n)
{
	cout << "���� ���:" << n << endl;
}
void print(double j)
{
	cout << "�Ǽ� ���:" << j << endl;
}
void print(char g)
{
	cout << "���� ���:" << g << endl;
}
int main()
{
	print(100);
	print(3.14);
	print('c');

	return 0;
}