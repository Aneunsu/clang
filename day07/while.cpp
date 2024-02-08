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
	
	//1. 유저에게 n을 입력받고 1~n까지의 정수의 합을 나타내세요
	//while(1)을 사용해서
	
	/*int n;
	int sum = 0;
	int start = 1;
	printf("정수 입력:");
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

	//2. 정수 입력하면 1~n까지의 n의 약수 출력
	/*int a;
	int b = 1;
	printf("정수 입력:");
	scanf("%d", &a);

	while (b<=a)
	{	
		if (a % b == 0)
		{
			printf("%d\n", b);
		}	
		b++;
	}*/
	
	//3. 여러 정수 입력받고 0 누른 후 이전 정수의 합 출력

	int a=1;
	int total = 0;

	while (a != 0)
	{
		printf("정수 입력:");
		scanf("%d", &a);
		total += a;

	}	printf("정수의 합:%d", total);


	return 0;
}