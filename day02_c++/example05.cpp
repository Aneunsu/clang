#include<iostream>

using namespace std;
int main()
{	//5. ���ĺ� ���� ���� �Է¹޾� ���� ����ϴ� ���α׷�
	
	int vowle = 0, consonant = 0;
	char ch;

	cout << "�����ڸ� �Է��ϰ� �ܵ��-z�� ġ����..";
	while (cin >> ch)
	{
		switch (ch)
		{
		case'a':case'i':case'e':case'o':case'u':
				vowle++; break;
			default:
				consonant++; break;
		}
	}
	cout << "����:" << vowle++ << endl;
	cout << "����:" << consonant++ << endl;

	return 0;
}