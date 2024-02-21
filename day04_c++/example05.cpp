#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*1.
	string s = "When in Rome,do as the Romans";
	int index = s.find("Rome");	//위치 찾아줌
	cout << index << endl;	//0부터 시작 */

	string s;
	cout << "주민등록 번호를 입력하시오:";
	cin >> s;

	cout << "-가 제거된 주민등록 번호:";
	for (auto& c : s)	//s를 c공간에 넣어줌
	{
		if (c == '-')continue;	//for문으로 올라감
		cout << c;
	}
	cout << endl;

	return 0;
}