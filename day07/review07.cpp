#include<stdio.h>

int main()
{
	//1. ������ 1~9�ܱ��� ��� ����ϴ� ���α׷�
	
	/*for (int a = 1; a <= 9; a++)
	{
		for (int b = 1; b <= 9; b++)
		{
			printf("%d*%d=%d\n", a, b, a * b);
		}
	}*/

	//2. N�� ��� ����ϱ�

	/*int a;
	printf("���� �Է�:");
	scanf("%d", &a);
	for (int b=1;b<=100;b++)
	{
		if (b % a == 0) 
		{
			printf("%d\n",b);
		}
		
	}*/

	//3. �������� 2�̻��� ������ �Է¹ް�
	//**
	//**

	//***
	//***

	//int a;
	//printf("���� �Է�:");
	//scanf("%d", &a);

	//for (int b=0;b<=a;b++)	//������
	//{	
	//	for(int c=0;c<=a;c++)	//������
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//4. N�Է� ���� �� ���� ���
	int a;
	printf("���� �Է�:");
	scanf("%d", &a);

	for (int b = 0; b <a; b++)
	{
		for (int c=0;c<=b;c++)
		{
			printf("*");
		}
			printf("\n");
	}
	return 0;
}