#include<stdio.h>

int main()
{	
	//1. ���� �Է� �� 100�� �ڸ� �� ��Ÿ����
	int n1;
	printf("���� �Է�:");
	scanf("%d", & n1);
	printf("%d\n", (n1 / 100) % 10);

	//2. ���� �Է� �� 20�̻��̰� 30�����̸� 1�ƴϸ� 0
	int n2;
	printf("���� �Է�:");
	scanf("%d", &n2);
	printf("%d\n",20<=n2&&n2<=30? 1:0);

	//3. ���� �Է� �� Ȧ���� 1�ƴϸ� 0
	int n3;
	printf("���� �Է�:");
	scanf("%d", &n3);
	printf("%d\n", n3%2==1? 1:0);

	//4. ���� �Է� �� ��
	int n4,n5;
	printf("ù ��° ����:");
	scanf("%d", &n4);
	printf("�� ��° ����:");
	scanf("%d", &n5);
	printf("%d\n", n4 > n5 ? n4 : n5);

	

	return 0;
}