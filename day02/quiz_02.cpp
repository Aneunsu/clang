#include<stdio.h>

int main() {

	int age,number;
	double height;
	printf("����� ���� �Է�:");
	scanf("%d", &age);
	printf("����� Ű �Է�:");
	scanf("%lf", &height);
	printf("����� �й� �Է�:");
	scanf("%d", &number);
	printf("����� ���̴� %d�̰�, ����� Ű�� %.2lf�̰�, �й��� %d�̱���", age, height, number);


	return 0;
}