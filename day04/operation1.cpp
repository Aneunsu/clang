//oprtator [연산자]

//산술 연산자
//대입 연산자
//비교 연산자
//논리 연산자
// ---------
//증감 연산자
//-

#include<stdio.h>

int main()
{
	//1. 증감 연산자
	//- ++.--
	//int a = 1;
	//a++;
	//a++;
	//printf("a:%d\n",a);
	//a--;
	//printf("a:%d\n", a);

	//int b = 0;
	//++b: 전위 연산자
	//b++: 후위 연산자
	//printf("b:%d\n", ++b);	//1
	//printf("b:%d\n", b++);	//1	
	//printf("b:%d", ++b);	//3

	//2. 삼항 연산자
	//유저가 알파벳을 입력하고 대문자이면 숫자 1을 출력 아니면 0 출력하는 프로그램
	/*char a;
	printf("알파벳을 입력하시오:");
	scanf("%c", &a);
	getchar();

	int isCapital= 65 <= a && a <= 90 ? 1 : 0;
	printf("결과:%d", isCapital);*/

	//유저가 문자 하나 입력하고 알파벳이면 숫자 1을 출력 아니면 0 출력하는 프로그램
	/*char b;
	printf("문자를 입력하시오:");
	scanf("%c", &b);
	getchar();

	int isCapital = (65 <= b && b <= 90);
	int isLower = (97 <= b && b <= 122);
	int c = isCapital || isLower;

	int result= c ? 1 : 0;
	printf("결과:%d", result);*/

	//3. 콤마 연산자
	//int a, b; //,

	//4. sizeof 연산자
	//int-4byte, float-4byte, double-8byte, char-1byte

	int m;
	printf("사이즈 m:%d", sizeof(m));


	//5. 인간:연산+기억 동시 가능
	//컴퓨터:연산(cpu), 기억(ram) 따로
	//int 4byte=32bit=2^32(0~+-2^31)
	//1bit
	//8bit=1byte
	//1024byte=1kb
	//1024kb=1mb
	//1024mb=1gb

	//6. type casting(형 변환)
	int n = 10;
	double k = (double)n;



	
	return 0;
}