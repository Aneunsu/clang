#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;	//string ��ü s�� �����Ѵ�
	string s1 = "Hello";	//string ��ü s1�� �����ϰ� �ʱ�ȭ
	//�������� �ʱ�ȭ string s1{ "Hello" };
	string s2 = "World!";
	string s3 = s1 + s2;	//���� ������
	string s4 = s1;	//���� ����
	s+=s4;	//���� ����

	cout <<"s:"<< s << endl;
	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;
	cout << "s3:" << s3 << endl;
	cout << "s4:" << s4 << endl;
	
	//���ڿ� ��
	if (s1 == s2)
		cout << "������ ���ڿ� �Դϴ�." << endl;
	else
		cout << "������ ���ڿ��� �ƴմϴ�." << endl;
	if (s1 < s2)
		cout << "s1�� �ڿ� �ֽ��ϴ�." << endl;
	else
		cout << "s2�� �ڿ� ���� �ֽ��ϴ�." << endl;
	


	return 0;
}