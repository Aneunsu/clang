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
	//�Ű������� �Է¹޾Ƽ� �ִ밪 ����ϴ� ���α׷�
	int a = 2, b = 3;
	max(a, b);	//�ִ밪 ���
	modify(a, b); //���� ��ȭ

	cout << a << " " << b << endl;
	return 0;

}