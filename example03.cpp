#include<iostream>

using namespace std;
int main()
{	//3. ����ڵ� ���߱� ���α׷�
	char a='h';
	cout << "��� �ڵ带 ���纸����:";
	char code;
	cin >> code;

	if (code < a)
	{
		cout << code << "�ڿ� �ֽ��ϴ�." << endl;
	}
	else if (code > a)
	{
		cout << code << "�տ� �ֽ��ϴ�." << endl;
	}
	else
	{
		cout << "���߾����ϴ�." << endl;
	}

	return 0;
}