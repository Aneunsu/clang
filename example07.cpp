#include<iostream>

using namespace std;
int main()
{
	//7. ������ ����ϱ�
	int n;
	int i = 1;

	cout << "������ �߿��� ����ϰ� ���� ����?";
	cin >> n;

	while (i <= 9)
	{	
		
		cout << n <<"*"<< i<<"="<<n*i<<endl;
		i++;
	}

}