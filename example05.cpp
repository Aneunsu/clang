#include<iostream>

using namespace std;
int main()
{	//5. 알파벳 자음 모음 입력받아 갯수 출력하는 프로그램
	
	int vowle = 0, consonant = 0;
	char ch;

	cout << "영문자를 입력하고 콘드롤-z를 치세요..";
	while (cin >> ch)
	{
		switch (ch)
		{
		case'a':case'i':case'e':case'o':case'u':
				vowle++; break;
			default:
				consonant++; break;
		}
	}
	cout << "모음:" << vowle++ << endl;
	cout << "자음:" << consonant++ << endl;

	return 0;
}