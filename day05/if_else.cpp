#include<stdio.h>

int main()
{
	//1. 
	/*int eng;
	printf("���� ���� �Է�:");
	scanf("%d", &eng);

	if (eng > 90)
	{
		printf("A�Դϴ�.\n");
	}
	else if (eng > 80)
	{
		printf("B�Դϴ�.\n");
	}
	else if (eng > 70)
	{
		printf("A�Դϴ�.\n");
	}
	else
	{
		printf("Ż���Դϴ�.\n");
	}*/

	//2.
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);
	
	if (num > 0)
	{
		if (num % 2 == 1)
		{
			printf("���� Ȧ�� �Դϴ�.\n");
		}
		else {
			printf("���� ¦���Դϴ�.\n");
		}
	}
	else if (num < 0)
	{
		if (num % 2 == 1)
		{
			printf("���� Ȧ�� �Դϴ�.\n");
		}
		else {
			printf("���� ¦���Դϴ�.\n");
		}
	}
	else {
		printf("0�Դϴ�.\n");
	}



	return 0;
}