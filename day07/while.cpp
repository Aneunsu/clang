#include<stdio.h>

int main()
{	
	/*int a = 1;
	while (1)
	{
		printf("%d\n", a);
		if (a == 10)
		{
			break;
		}
		a++;
	}*/
	
	//1. �������� n�� �Է¹ް� 1~n������ ������ ���� ��Ÿ������
	//while(1)�� ����ؼ�
	
	/*int n;
	int sum = 0;
	int start = 1;
	printf("���� �Է�:");
	scanf("%d\n", &n);

	while (1)
	{	
		if (start == n)
		{	
			sum += start;
			break;
		}
		sum += start;
		start++;

	}	printf("%d", sum);*/

	//2. ���� �Է��ϸ� 1~n������ n�� ��� ���
	/*int a;
	int b = 1;
	printf("���� �Է�:");
	scanf("%d", &a);

	while (b<=a)
	{	
		if (a % b == 0)
		{
			printf("%d\n", b);
		}	
		b++;
	}*/
	
	//3. ���� ���� �Է¹ް� 0 ���� �� ���� ������ �� ���

	int a=1;
	int total = 0;

	while (a != 0)
	{
		printf("���� �Է�:");
		scanf("%d", &a);
		total += a;

	}	printf("������ ��:%d", total);


	return 0;
}