#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{
	//1.2���� �ֻ����� ������ �ֻ����� ���� ǥ���ϴ� ���α׷�(���� �����ϴ� �ڵ�)//������ ������ ��
	int a, b;

	srand(time(NULL));	//�ð��� ���ڰ����� ����//time���� �ٸ��� �־ ��� ����
	int dice01 = (rand() % 6) + 1;	//1~6 ������ ���� �߻�
	int dice02 = (rand() % 6) + 1;	//1~6 ������ ���� �߻�

	cout << "�� �ֻ����� ��:" << dice01 + dice02 << endl;




	return 0;
}