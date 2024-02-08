#include<stdio.h>

int main()
{
	//1. 구구단 1~9단까지 모두 출력하는 프로그램
	
	/*for (int a = 1; a <= 9; a++)
	{
		for (int b = 1; b <= 9; b++)
		{
			printf("%d*%d=%d\n", a, b, a * b);
		}
	}*/

	//2. N의 배수 출력하기

	/*int a;
	printf("수를 입력:");
	scanf("%d", &a);
	for (int b=1;b<=100;b++)
	{
		if (b % a == 0) 
		{
			printf("%d\n",b);
		}
		
	}*/

	//3. 유저한테 2이상의 정수를 입력받고
	//**
	//**

	//***
	//***

	//int a;
	//printf("정수 입력:");
	//scanf("%d", &a);

	//for (int b=0;b<=a;b++)	//세로행
	//{	
	//	for(int c=0;c<=a;c++)	//가로행
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//4. N입력 받은 후 문자 출력
	int a;
	printf("정수 입력:");
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