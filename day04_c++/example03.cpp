#include<iostream>
using namespace std;

//���� c�� n�� �ݺ��Ͽ� ȭ�鿡 ����ϴ� �Լ�
void display(char c = '*', int n = 10)	//�ʱⰩ �����ص� ��
{
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}
int main()
{
	display('@');
	display('#', 10);
	display();
	return 0;
}