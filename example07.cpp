#include<iostream>

using namespace std;
int main()
{
	//7. 구구단 출력하기
	int n;
	int i = 1;

	cout << "구구단 중에서 출력하고 싶은 단은?";
	cin >> n;

	while (i <= 9)
	{	
		
		cout << n <<"*"<< i<<"="<<n*i<<endl;
		i++;
	}

}