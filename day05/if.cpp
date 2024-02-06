#include<stdio.h>

int main()
{

	int num;
	printf("정수 입력:");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("양의 정수입니다.\n");

	}
	else {
		printf("0또는 음의 정수입니다.\n");
	}

	printf("프로그램 끝");



	return 0;
}