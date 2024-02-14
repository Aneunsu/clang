#include<stdio.h>

int main()
{
	/*char megastudy[4][20] =
	{
		"math","english","korean","computer"
	};
	printf("%s\n", megastudy[0]);
	printf("%s\n", megastudy[1]);*/


	//유저에게 커피메뉴 3가지 입력받고 출력받기
	char coffee[3][20];
	
	for (int i = 0; i < 3; i++)
	{
		printf("%d번쨰 메뉴 입력:",i);
		scanf("%s", &coffee[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d번쨰 메뉴 입력는 %s\n", i,coffee[i]);
		
	}


	return 0;
}