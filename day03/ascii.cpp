//ascii
#include<stdio.h>

int main()
{
	/*char alpha = 'a';
	printf("alpha:%c\n", alpha);
	printf("alpha:%d\n", alpha);*/

	//1. 알파벳 소문자 입력후 알파벳의 순서 나타내는 프로그램
	/*char alpha;
	printf("알파벳 소문자 입력:");
	scanf("%c", &alpha);
	printf("%c의 순서는 %d입니다.\n", alpha,alpha-97);*/


	//2. 정수를 (0~25)입력후 정수에 따른 알파벳 나타내기 프로그램
	/*int num;
	printf("정수 입력:");
	scanf("%d", &num);
	printf("%d번째 대문자는 %c입니다.\n", num,num+65);*/

	//3. 소문자를 입력하면 대문자로 출력
	char alpha;
	printf("소문자 입력:");
	scanf("%c", &alpha);
	getchar();
	printf("%c는 %c로 출력된다.\n", alpha, alpha - 32);
	getchar();

	//4. 대문자를 입력하면 소문자로 출력
	char alpha2;
	printf("대문자 입력:");
	scanf("%c", &alpha2);
	printf("%c는 %c로 출력된다.", alpha2, alpha2 + 32);

	return 0;
}