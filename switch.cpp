#include<iostream>

using namespace std;
int main()
{	
	//������ �Է� �޾� ����� ����ϴ� ���α׷�
	int num;

	cout << "���ڸ� �Է��ϼ���:";
	cin >> num;
	switch (num)
	{
		case 0:
			cout << "zero\n";
			break;
		case 1:
			cout << "one\n";
			break;
		case 2:
			cout << "two\n";
			break;
		default:
			cout << "many..\n";
	}



	return 0;
}