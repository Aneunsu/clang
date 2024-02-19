#include<iostream>

using namespace std;
int main()
{	
	//1. 두 수를 입력받아 더 큰 수 입력받기
	int x, y;
	cout << "x값을 입력하시오:";
	cin >> x;
	cout << "y값을 입력하시오:";
	cin >> y;

	if (x > y)
	{
		cout << "x가 y보다 크다" << endl;
	}
	else
	{
		cout << "y가x보다 크다" << endl;
	}





	return 0;
}