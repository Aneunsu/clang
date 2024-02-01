//oper

#include<stdio.h>

int main() {

	int a;
	printf("첫 번째 수 입력:");
	scanf("%d", &a);

	int b = 5;
	printf("두 번째 수 입력:");
	scanf("%d", &b);

	printf("두 수의 합:%d\n", a + b); //+
	printf("두 수의 차:%d\n", a - b); //-
	printf("두 수의 곱:%d\n", a * b); //*
	printf("두 수의 나눗셈:%d\n", a / b); // /나머지 없음
	printf("두 수의 나머지:%d", a % b); // 나머지 나옴

	return 0;
}