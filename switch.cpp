#include<iostream>

using namespace std;
int main()
{	
	//정수를 입력 받아 영어로 출력하는 프로그램
	int num;

	cout << "숫자를 입력하세요:";
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