#include<stdio.h>

int main()
{
	//1. 
	/*int eng;
	printf("영어 점수 입력:");
	scanf("%d", &eng);

	if (eng > 90)
	{
		printf("A입니다.\n");
	}
	else if (eng > 80)
	{
		printf("B입니다.\n");
	}
	else if (eng > 70)
	{
		printf("A입니다.\n");
	}
	else
	{
		printf("탈락입니다.\n");
	}*/

	//2.
	int num;
	printf("정수 입력:");
	scanf("%d", &num);
	
	if (num > 0)
	{
		if (num % 2 == 1)
		{
			printf("양의 홀수 입니다.\n");
		}
		else {
			printf("양의 짝수입니다.\n");
		}
	}
	else if (num < 0)
	{
		if (num % 2 == 1)
		{
			printf("음의 홀수 입니다.\n");
		}
		else {
			printf("음의 짝수입니다.\n");
		}
	}
	else {
		printf("0입니다.\n");
	}



	return 0;
}