#include<iostream>

using namespace std;
int main()
{
	int fruit;

	cout << "������ ��ȣ�� �Է�(1:���,2:��,3:�ٳ���,������:����)";
	cin >> fruit;

	switch (fruit)
	{
	case 1:cout << "���";
		break;
	case 2:cout << "��";
		break;
	case 3:cout << "�ٳ���";
		break;
	default:cout << "�����Դϴ�";
		break;

	}


	return 0;
}