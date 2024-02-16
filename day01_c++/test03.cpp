//1. 수식과 연산자
/*사칙 연산자
x+y (더하기)
x-y (빼기)
x*y (곱하기)
x/y (나누기)
x%y (나눈 나머지)
++,--
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{	
	/*1.
	int a,b;
	cout << "현재 가지고 있는 돈:";
	cin >> a;
	cout << "사탕의 가격:";
	cin >> b ;
	cout << "살 수 있는 사탕의 개수:" << a / b <<"개" << endl;
	cout << "남은 돈:" << a % b<<"원" << endl;*/

	
	double tem = 60;
	double c_tem;

	c_tem = (5.0 / 9.0) * (tem - 32);
	cout << "화씨온도" << tem << "도는 섭씨온도" << c_tem << "입니다.";




	return 0;
}