#include<stdio.h>

int main()
{
	/*char coffee[5] = { 'l','a','t','t','\0' };
	
	for (int i = 0; i < 5; i++)
	{
		printf("%c", coffee[i]);

	}
	printf("\n");
	printf("%s", coffee);*/


	//���� char a='a'
	//���ڿ� char coffee[]�� ���� ������ null���ڷ� ��������('\0')
	char coffee[] = { 'a','m','e','r','i','c','a','n','o','\0'};

	//printf("sizeof coffee: %d", sizeof(coffee));

	for (int i = 0; i < sizeof(coffee); i++)
	{
		printf("%c", coffee[i]);
	}
	printf("\n");
	printf("%s", coffee);

	return 0;
}