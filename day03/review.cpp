#include<stdio.h>

int main()
{
	int year;
	printf("태어난 연도:");
	scanf("%d", &year);
	printf("현재 만나이는 %d입니다.\n", 2024 - year);

	double a, b, c;
	printf("첫 번째 수 입력:");
	scanf("%lf", &a);
	printf("두 번째 수 입력:");
	scanf("%lf", &b);
	printf("세 번째 수 입력:");
	scanf("%lf", &c);
	printf("세 수의 평균은 %d입니다.\n", (a + b + c) / 3);

	double C;
	printf("섭씨 온도 입력:");
	scanf("%lf", &C);
	printf("섭씨 온도를 화씨 온도로 변환하면 %.2lf이다.\n", C * 5.9 + 3.2);

	double m, kg;
	printf("키와 몸무게 입력:");
	scanf("%lf %lf", &m, &kg);
	printf("BMI는 %lf이다.\n", kg/(m*m));


	return 0;
}