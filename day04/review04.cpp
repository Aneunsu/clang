#include<stdio.h>

int main()
{
	char a;
	printf("�빮�� �Է�:");
	scanf("%c", &a);
	getchar();
	printf("%c�� %c�̴�.\n", a, a + 32);
	
	char b;
	printf("�ҹ��� �Է�:");
	scanf("%c", &b);
	getchar();
	printf("%c�� %c�̴�.", b, b - 32);

	return 0;
}