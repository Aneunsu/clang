#include<stdio.h>

int main()
{
	int year;
	printf("�¾ ����:");
	scanf("%d", &year);
	printf("���� �����̴� %d�Դϴ�.\n", 2024 - year);

	double a, b, c;
	printf("ù ��° �� �Է�:");
	scanf("%lf", &a);
	printf("�� ��° �� �Է�:");
	scanf("%lf", &b);
	printf("�� ��° �� �Է�:");
	scanf("%lf", &c);
	printf("�� ���� ����� %d�Դϴ�.\n", (a + b + c) / 3);

	double C;
	printf("���� �µ� �Է�:");
	scanf("%lf", &C);
	printf("���� �µ��� ȭ�� �µ��� ��ȯ�ϸ� %.2lf�̴�.\n", C * 5.9 + 3.2);

	double m, kg;
	printf("Ű�� ������ �Է�:");
	scanf("%lf %lf", &m, &kg);
	printf("BMI�� %lf�̴�.\n", kg/(m*m));


	return 0;
}