//���(control_statement)[�ڵ带 ��Ʈ����]
//1. ���ǹ�(if,switch)[���ǿ� ���� �ڵ����]
//2. �ݺ���(for,while)[�ڵ带 n�� ����]


#include<stdio.h>

int main()
{

	/*for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}*/

	/*int n1;
	int total = 0;
	printf("���� �Է�:");
	scanf("%d", &n1);
	
	for (int a = 1; a <= n1; a++)
	{
		total += a;
		
		
	}
	printf("%d", total);*/

	//1.
	/*int a;
	printf("���� �Է�:");
	scanf("%d", &a);
	
	for (int b = 1; b <= 9; b++)
	{
		printf("%d*%d=%d\n", a, b, a * b);
	}*/
	
	//2. 
	/*for (int i=65;i<=90;i++)
	{
		printf("%c %c\n", i, i + 32);
	}*/


	//for (int i = 0; i < 10; i++)
	//{
	//	if (i == 7)
	//	{
	//		//break; //for�� Ż��
	//		//continue; //for�� ����
	//	}
	//	printf("%d", i);
	//}

	//A~K O~Z ����ϴ� ���α׷�
	/*for (int i = 65; i <= 90; i++)
	{
		
		if (76 <= i && i <= 78)
		{
			continue;
		}
		printf("%c\n", i);
	}*/

	//��øfor��
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("i:%d,j;%d\n", i, j);
	//		//j�� 5���� ���� Ż���ؼ� i���� �ٽ� ����
	//	}
	//}

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d*%d=%d\n",i, j, i * j);
		}
	} printf("\n");
	return 0;
}