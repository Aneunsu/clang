//oper

#include<stdio.h>

int main() {

	int a;
	printf("ù ��° �� �Է�:");
	scanf("%d", &a);

	int b = 5;
	printf("�� ��° �� �Է�:");
	scanf("%d", &b);

	printf("�� ���� ��:%d\n", a + b); //+
	printf("�� ���� ��:%d\n", a - b); //-
	printf("�� ���� ��:%d\n", a * b); //*
	printf("�� ���� ������:%d\n", a / b); // /������ ����
	printf("�� ���� ������:%d", a % b); // ������ ����

	return 0;
}