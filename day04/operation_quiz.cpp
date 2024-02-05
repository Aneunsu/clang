#include<stdio.h>

int main()
{
	//1. 0부터 99999 사이의 정수를 입력받아, 그 숫자의 각 자리수를 분리하여 출력하는 프로그램 작성
	int num;
	printf("정수 입력:");
	scanf("%d", &num);
	getchar();
	printf("%d만%d천%d백%d십%d\n",num/10000,num%1000, num % 100, num % 10, num % 1);


	//2. 양의 정수를 입력받아, 그 숫자를 시간(분,초) 형태로 변환하여 출력하는 프로그램 작성
	int a;
	printf("숫자 입력:");
	scanf("%d", &a);
	printf("%d분%d초",a/60,a%60);




	return 0;
}