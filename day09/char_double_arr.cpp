#include<stdio.h>

int main()
{
	/*char megastudy[4][20] =
	{
		"math","english","korean","computer"
	};
	printf("%s\n", megastudy[0]);
	printf("%s\n", megastudy[1]);*/


	//�������� Ŀ�Ǹ޴� 3���� �Է¹ް� ��¹ޱ�
	char coffee[3][20];
	
	for (int i = 0; i < 3; i++)
	{
		printf("%d���� �޴� �Է�:",i);
		scanf("%s", &coffee[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d���� �޴� �Է´� %s\n", i,coffee[i]);
		
	}


	return 0;
}