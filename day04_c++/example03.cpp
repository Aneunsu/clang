#include<iostream>
using namespace std;

//문자 c를 n번 반복하여 화면에 출력하는 함수
void display(char c = '*', int n = 10)	//초기갑 선언해도 됨
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