//operation[연산자]

//토큰[token]
//산술 연산자: +,-,/,%
//대입 연산자: =,+=,-=,*=,/=
//비교 연산자: >,<,<=,>=,==(같다),!=(다르다)
//1(참), 0(거짓)
//논리 연산자: &&(and),||(or),!(not)
//&&: 모두 참이여야만 참임
//||: 하나라도 참이면 참임
//!: not
#include<stdio.h>

int main()
{
	printf("%d", !(5 < 3 || 1 < 0 || 100 < 0));
	return 0;

}