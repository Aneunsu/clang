#include<stdio.h>

int main()
{
	
	/*int a[2] = { 1,2 };
	int b[2][3] = { {1,2,3},{4,5,6} };

	int eng_score[3] = { 50,60,80 };
	int math_score[3] = { 70,60,90 };
	int score[2][3] = { {50,60,80},{70,60,90} };*/

	//printf("%d", b[0][0]);
	//printf("%d", b[0][1]);
	//printf("%d", b[0][2]);
	//printf("%d", b[1][0]);
	//printf("%d", b[1][1]);
	//printf("%d", b[1][2]);

	/*int eng_total = 0;
	int mat_total = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) 
		{	
			if (i == 0)
			{
				eng_total += score[i][j];

			}
			else {
				mat_total += score[i][j];
			}
			
		}
	
	}
	printf("영어의 총합은 %d이고, 수학의 총합은 %d이다.", eng_total, mat_total);*/

	//국 수 영 탐
	int score[3][4] = {
		{70,80,80,80},
		{60,70,50,40},
		{70,50,80,60},
	};
	printf("탐구의 평균은 %d입니다.",score[0][4] / 3);
	return 0;
}