#include<stdio.h>

int main()
{
	char a;
	printf("대문자 입력:");
	scanf("%c", &a);
	getchar();
	printf("%c는 %c이다.\n", a, a + 32);
	
	char b;
	printf("소문자 입력:");
	scanf("%c", &b);
	getchar();
	printf("%c는 %c이다.", b, b - 32);

	return 0;
}