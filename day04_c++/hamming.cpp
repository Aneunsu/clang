#include<iostream>
#include<string>

using namespace std;
int main()
{
	//동일한 길이의 2개의 문자열을 입력하고 문자열간의 해밍 거리 구하는 프로그램
	string s1, s2;
	int count = 0;

	cout << "문자열 1입력:";
	cin >> s1;
	cout << "문자열 2입력:";
	cin >> s2;
	//입력받은 두 문자열의 길이가 동일한지 체크
	if (s1.length() != s2.length())
		cout << "오류:문자열의 길이가 다름" << endl;
	else
	{
		for (int i = 0; i < s1.length(); i++)
		{
			if (s1[i] != s2[i])
				count += 1;	//해밍거리 카운트
		}
		cout << "해밍 거리는" << count << endl;

	}
		
		
		return 0;
}