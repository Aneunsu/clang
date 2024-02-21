#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;	//string 객체 s를 생성한다
	string s1 = "Hello";	//string 객체 s1을 생성하고 초기화
	//보편적인 초기화 string s1{ "Hello" };
	string s2 = "World!";
	string s3 = s1 + s2;	//연결 연산자
	string s4 = s1;	//대입 가능
	s+=s4;	//연산 가능

	cout <<"s:"<< s << endl;
	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;
	cout << "s3:" << s3 << endl;
	cout << "s4:" << s4 << endl;
	
	//문자열 비교
	if (s1 == s2)
		cout << "동일한 문자열 입니다." << endl;
	else
		cout << "동일한 문자열이 아닙니다." << endl;
	if (s1 < s2)
		cout << "s1이 뒤에 있습니다." << endl;
	else
		cout << "s2이 뒤에 있지 있습니다." << endl;
	


	return 0;
}