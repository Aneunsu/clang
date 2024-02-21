#include<iostream>
#include<string>
using namespace std;
//string 클래스를 이용한 입출력
int main()
{
	string s1,name, addr;
	cout << "이름을 입력하세요:";
	getline(cin, name);
	//cin >> name;
	//cin.ignore();
	

	cout << "주소를 입력하세요:";
	getline(cin, addr);
	cout << addr << "의" << name << "씨 안녕하세요" << endl;

	s1 = "Hello World!";
	cout << "s1 문자열의 크기는" << s1.size() << endl;


	return 0;
}