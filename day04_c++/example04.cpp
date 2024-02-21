#include<iostream>

using namespace std;

int sum(int x=0, int y=0,int z=0,int w=0)	//초기화 안하면 마지막 것만 출력
{
	return x + y + z + w;
}
int main()
{
	//1. 디폴트 매개변수 실습
	cout << "sum()=" << sum()<< endl;
	cout << "sum(10,15)=" << sum(10, 15) << endl;
	cout << "sum(10,15,25)=" << sum(10, 15, 25) << endl;
	cout << "sum(10,15,25,30)=" << sum(10, 15, 25,30) << endl;

	return 0;
}