#include<iostream>
#include<string>
using namespace std;
//string Ŭ������ �̿��� �����
int main()
{
	string s1,name, addr;
	cout << "�̸��� �Է��ϼ���:";
	getline(cin, name);
	//cin >> name;
	//cin.ignore();
	

	cout << "�ּҸ� �Է��ϼ���:";
	getline(cin, addr);
	cout << addr << "��" << name << "�� �ȳ��ϼ���" << endl;

	s1 = "Hello World!";
	cout << "s1 ���ڿ��� ũ���" << s1.size() << endl;


	return 0;
}