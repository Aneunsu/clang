#include<iostream>

using namespace std;
int main()
{
	//������ �Է¹޾� ���,����,0���� �˻�
	/*int x;
	cout << "x���� �Է�:";
	cin >> x;
	if (x > 0)
	{
		cout << "����Դϴ�." << endl;
	}
	else if (x < 0)
	{
		cout << "�����Դϴ�." << endl;
	}
	else
	{
		cout << "0�Դϴ�." << endl;
	}*/

	//2. ���̸� �Է¹޾� ���, û�ҳ�, ���� �����ϴ� ���α׷�
	int age;
	cout << "���̸� �Է��Ͻÿ�:";
	cin >> age;

	if (age <= 12)
	{
		cout << "����Դϴ�." << endl;
	}
	else if (age <= 19)
	{
		cout << "û�ҳ��Դϴ�." << endl;
	}
	else
	{
		cout << "��Դϴ�." << endl;
	}
 
}