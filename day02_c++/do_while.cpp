#include<iostream>
#include<string>

using namespace std;
int main()
{
	string str;

	do
	{
		cout << "���ڿ��� �Է��ϼ���:";
		getline(cin, str);
		//cin >> str;
		cout << "������� �Է���:" << str << endl;

	} while (str != "����");


	return 0;
}