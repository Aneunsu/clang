#include<iostream>

using namespace std;
int main()
{
	//4. 세개의 정수 중 큰 수 찾기
	int a, b, c, largest;

	cout << "3개의 정수를 입력하세요:";
	cin >> a >> b >> c;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	cout << "가장 큰 수는 " << largest << endl;



	return 0;
}