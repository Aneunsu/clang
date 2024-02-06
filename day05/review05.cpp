#include<stdio.h>

int main()
{	
	//1. 정수 입력 후 100의 자리 수 나타내기
	int n1;
	printf("정수 입력:");
	scanf("%d", & n1);
	printf("%d\n", (n1 / 100) % 10);

	//2. 정수 입력 후 20이상이고 30이하이면 1아니면 0
	int n2;
	printf("정수 입력:");
	scanf("%d", &n2);
	printf("%d\n",20<=n2&&n2<=30? 1:0);

	//3. 정수 입력 후 홀수면 1아니면 0
	int n3;
	printf("정수 입력:");
	scanf("%d", &n3);
	printf("%d\n", n3%2==1? 1:0);

	//4. 정수 입력 후 비교
	int n4,n5;
	printf("첫 번째 정수:");
	scanf("%d", &n4);
	printf("두 번째 정수:");
	scanf("%d", &n5);
	printf("%d\n", n4 > n5 ? n4 : n5);

	

	return 0;
}