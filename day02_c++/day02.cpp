#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{
	//1.2개의 주사위를 던져서 주사위의 합을 표시하는 프로그램(난수 생성하는 코드)//난수는 임의의 수
	int a, b;

	srand(time(NULL));	//시간을 종자값으로 설정//time말고 다른거 넣어도 상관 없음
	int dice01 = (rand() % 6) + 1;	//1~6 사이의 난수 발생
	int dice02 = (rand() % 6) + 1;	//1~6 사이의 난수 발생

	cout << "두 주사위의 합:" << dice01 + dice02 << endl;




	return 0;
}