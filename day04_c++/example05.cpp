#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*1.
	string s = "When in Rome,do as the Romans";
	int index = s.find("Rome");	//��ġ ã����
	cout << index << endl;	//0���� ���� */

	string s;
	cout << "�ֹε�� ��ȣ�� �Է��Ͻÿ�:";
	cin >> s;

	cout << "-�� ���ŵ� �ֹε�� ��ȣ:";
	for (auto& c : s)	//s�� c������ �־���
	{
		if (c == '-')continue;	//for������ �ö�
		cout << c;
	}
	cout << endl;

	return 0;
}