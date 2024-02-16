//1.
/*출력과 입력
C++에서의 입력은 cin객체가, 콘솔출력은 cout객체가 담당
이들은 iostream 라이브러리에 포함되어 있다
출력 : cout
->cout << n;
입력:cin
->cin >> n;

int i;
cin >> i;	//정수를 읽어서 i변수에 저장
double f;
cin >> f;	//실수를 읽어서 f변수에 저장
string s;
cin << s;	//문자열을 읽어서 s변수에 저장
*/

//#include<iostream>
#include<string>
using namespace std;
int main()
{	
	int age;
	cout << "나이를 입력하세요: ";
	cin >> age <<endl;
	

	string name;
	cout << "이름을 입력하세요: ";
	cin >> name<<endl;
	
	double height;
	cout << "키를 입력하세요: ";
	cin >> height;


}