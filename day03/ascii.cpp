//ascii
#include<stdio.h>

int main()
{
	/*char alpha = 'a';
	printf("alpha:%c\n", alpha);
	printf("alpha:%d\n", alpha);*/

	//1. ���ĺ� �ҹ��� �Է��� ���ĺ��� ���� ��Ÿ���� ���α׷�
	/*char alpha;
	printf("���ĺ� �ҹ��� �Է�:");
	scanf("%c", &alpha);
	printf("%c�� ������ %d�Դϴ�.\n", alpha,alpha-97);*/


	//2. ������ (0~25)�Է��� ������ ���� ���ĺ� ��Ÿ���� ���α׷�
	/*int num;
	printf("���� �Է�:");
	scanf("%d", &num);
	printf("%d��° �빮�ڴ� %c�Դϴ�.\n", num,num+65);*/

	//3. �ҹ��ڸ� �Է��ϸ� �빮�ڷ� ���
	char alpha;
	printf("�ҹ��� �Է�:");
	scanf("%c", &alpha);
	getchar();
	printf("%c�� %c�� ��µȴ�.\n", alpha, alpha - 32);
	getchar();

	//4. �빮�ڸ� �Է��ϸ� �ҹ��ڷ� ���
	char alpha2;
	printf("�빮�� �Է�:");
	scanf("%c", &alpha2);
	printf("%c�� %c�� ��µȴ�.", alpha2, alpha2 + 32);

	return 0;
}