//제어문(control_statement)[코드를 컨트롤함]
//1. 조건문(if,switch)[조건에 의한 코드실행]
//2. 반복문(for,while)[코드를 n번 실행]


#include<stdio.h>

int main()
{

	/*for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}*/

	/*int n1;
	int total = 0;
	printf("정수 입력:");
	scanf("%d", &n1);
	
	for (int a = 1; a <= n1; a++)
	{
		total += a;
		
		
	}
	printf("%d", total);*/

	//1.
	/*int a;
	printf("정수 입력:");
	scanf("%d", &a);
	
	for (int b = 1; b <= 9; b++)
	{
		printf("%d*%d=%d\n", a, b, a * b);
	}*/
	
	//2. 
	/*for (int i=65;i<=90;i++)
	{
		printf("%c %c\n", i, i + 32);
	}*/


	//for (int i = 0; i < 10; i++)
	//{
	//	if (i == 7)
	//	{
	//		//break; //for문 탈출
	//		//continue; //for문 점프
	//	}
	//	printf("%d", i);
	//}

	//A~K O~Z 출력하는 프로그램
	/*for (int i = 65; i <= 90; i++)
	{
		
		if (76 <= i && i <= 78)
		{
			continue;
		}
		printf("%c\n", i);
	}*/

	//중첩for문
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("i:%d,j;%d\n", i, j);
	//		//j가 5까지 가면 탈출해서 i부터 다시 시작
	//	}
	//}

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d*%d=%d\n",i, j, i * j);
		}
	} printf("\n");
	return 0;
}