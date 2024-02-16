#include<iostream>
#include<string>
//1. 
/*변수: 데이터값을 저장하는 상자
int i{100}; string s{"hello"}; 보편적 초기화
자료형: 데이터의 종류(정수형, 부동 소수점형, 문자형, 부울형)
기호 상수: const double TAX_RATE=0.25;
int income=1000;
income=income-TAX_RATE*income;*/

//2.
/*auto 키워드: 타입 자동 추론
auto d=10.0;
자동 타입 추론 auto 예제
auto add(int x, int y)
{
	return x + y;
}
int main()
{
	auto sum = add(5, 6);
	cout << "결과 값은" << sum << endl;
}*/

using namespace std;
int main()
{	
	//bool형
	bool b;
	b = true;
	//문자형
	char ch;
	ch = 'a';

	//문자열
	string s1 = "Good";
	string s2 = "Afternoon";
	string s3 = s1 + " "+ s2 + "!";
	string s4 = "사과";
	string s5 = s4 + to_string(10) + "개";
	b = (s1 == s2);
	cout << "bool형: " << b << endl;
	cout << "문자열: "<< ch << endl;
	cout << "문자열: "<< s3 << endl;
	cout << "문자열 연결: " << s5 << endl;
	

	return 0;
}