#include<stdio.h>

int main()
{
	
	/*int a = 10;
	int* pa = &a;
	int** ppa = &pa;

	printf("a�� ��:%d\n", a);
	printf("a�� �ּҰ�:%d\n", &a);

	printf("pa�� ��[a�� �ּҰ�]:%d\n", pa);
	printf("pa�� �ּҰ�:%d\n", &pa);

	printf("ppa�� ��[pa�� �ּҰ�]:%d\n", ppa);
	printf("ppa�� ��[a�� �ּҰ�]:%d\n", *ppa);
	printf("ppa�� ��:%d[a�� ��]\n", **ppa);*/

	int a = 1, b = 2, c = 3;
	int* parr[3] = { &a,&b,&c };

	printf("%d %d %d", *parr[0], *parr[1], *parr[2]);




	return 0;
}