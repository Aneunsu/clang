#include<iostream>
#include<string>

using namespace std;
int main()
{
	//������ ������ 2���� ���ڿ��� �Է��ϰ� ���ڿ����� �ع� �Ÿ� ���ϴ� ���α׷�
	string s1, s2;
	int count = 0;

	cout << "���ڿ� 1�Է�:";
	cin >> s1;
	cout << "���ڿ� 2�Է�:";
	cin >> s2;
	//�Է¹��� �� ���ڿ��� ���̰� �������� üũ
	if (s1.length() != s2.length())
		cout << "����:���ڿ��� ���̰� �ٸ�" << endl;
	else
	{
		for (int i = 0; i < s1.length(); i++)
		{
			if (s1[i] != s2[i])
				count += 1;	//�عְŸ� ī��Ʈ
		}
		cout << "�ع� �Ÿ���" << count << endl;

	}
		
		
		return 0;
}