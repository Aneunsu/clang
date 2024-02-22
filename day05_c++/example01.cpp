#include<iostream>

using namespace std;

struct Car
{
	string gamerID;
	int fuel;
	int point;
};

int ave_pointer(const Car cc[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += cc[i].point;
	return sum / n;
}
int main()
{
	struct Car c1;	//구조체 선언
	c1.gamerID = "star11";
	c1.fuel = 100;
	c1.point = 100;
	
	struct Car c2[] = { {"kim",150,30},{"lee",200,50},{"choi,150,100"} };

	int nx = sizeof(c2) / sizeof(c2[0]);	//요소개수
	//cout << c1.gamerID << " " << c1.fuel << " " << c1.point << endl;

	for (int i = 0; i << nx; i++)
		cout << c2[i].gamerID << " " << c2[i].fuel << " " << c2[i].point << endl;
	cout<<"포인터 점수의 평균:"<<ave_pointer(c2,nx)
	return 0;
}