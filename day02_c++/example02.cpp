#include<iostream>

using namespace std;
int main()
{
	//변수를 입력받아 양수,음수,0인지 검사
	/*int x;
	cout << "x변수 입력:";
	cin >> x;
	if (x > 0)
	{
		cout << "양수입니다." << endl;
	}
	else if (x < 0)
	{
		cout << "음수입니다." << endl;
	}
	else
	{
		cout << "0입니다." << endl;
	}*/

	//2. 나이를 입력받아 어린이, 청소년, 성인 구분하는 프로그램
	int age;
	cout << "나이를 입력하시오:";
	cin >> age;

	if (age <= 12)
	{
		cout << "어린이입니다." << endl;
	}
	else if (age <= 19)
	{
		cout << "청소년입니다." << endl;
	}
	else
	{
		cout << "어른입니다." << endl;
	}
 
}