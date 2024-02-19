#include<iostream>

using namespace std;
int main()
{	//3. 비밀코드 맞추기 프로그램
	char a='h';
	cout << "비밀 코드를 맞춰보세요:";
	char code;
	cin >> code;

	if (code < a)
	{
		cout << code << "뒤에 있습니다." << endl;
	}
	else if (code > a)
	{
		cout << code << "앞에 있습니다." << endl;
	}
	else
	{
		cout << "맞추었습니다." << endl;
	}

	return 0;
}