#include<stdio.h>

int main() {

	int month, date;
	printf("�� �Է�: ");
	scanf("%d", &month);
	getchar(); //enter ���
	printf("�� �Է�: ");
	scanf("%d", &date);
	getchar();
	printf("����� ������ %d�� %d�� �̱���!\n", month, date);

	char alpha;
	printf("���ĺ� �ϳ� �Է�:");
	scanf("%c", &alpha);
	printf("%c%c%c\n",alpha, alpha, alpha);
	printf("%c %c\n", alpha, alpha, alpha);
	printf("%c%c%c", alpha, alpha, alpha);





	return 0;
}