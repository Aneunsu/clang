#include<iostream>
#include<string>
//1. 
/*����: �����Ͱ��� �����ϴ� ����
int i{100}; string s{"hello"}; ������ �ʱ�ȭ
�ڷ���: �������� ����(������, �ε� �Ҽ�����, ������, �ο���)
��ȣ ���: const double TAX_RATE=0.25;
int income=1000;
income=income-TAX_RATE*income;*/

//2.
/*auto Ű����: Ÿ�� �ڵ� �߷�
auto d=10.0;
�ڵ� Ÿ�� �߷� auto ����
auto add(int x, int y)
{
	return x + y;
}
int main()
{
	auto sum = add(5, 6);
	cout << "��� ����" << sum << endl;
}*/

using namespace std;
int main()
{	
	//bool��
	bool b;
	b = true;
	//������
	char ch;
	ch = 'a';

	//���ڿ�
	string s1 = "Good";
	string s2 = "Afternoon";
	string s3 = s1 + " "+ s2 + "!";
	string s4 = "���";
	string s5 = s4 + to_string(10) + "��";
	b = (s1 == s2);
	cout << "bool��: " << b << endl;
	cout << "���ڿ�: "<< ch << endl;
	cout << "���ڿ�: "<< s3 << endl;
	cout << "���ڿ� ����: " << s5 << endl;
	

	return 0;
}