#include<stdio.h>

int main()
{
	//1. 정수형 변수 a를 선언해서, 포인터를 사용하여 값을 100으로 바꾸기
	//2. 정수형 변수 b,c,를 각각 3,5를 초기화하고, 포인터를 사용해서 서로 바꾸기
	//3. 정수형 배열 변수 arr[5]를 선언해서 포인터를 사용해서 3의 배수로 채우기

	//1. 
	int a = 6;										//int a;
	int* pa;										//int *pa;
	pa = &a;										//pa=&a;
	a = 100;										//*pa=100;
	printf("%d\n", *pa);							//printf("%d\n",a);

	//2.
	int b = 3, c = 5, temp;
	int* p;
	p = &b;//주솟값 b
	temp = *p;//temp==3
	p = &c;//주솟값 3
	b = *p;//b==5
	p = &temp;
	c = *p;//c==3
	printf("%d %d\n", b, c);
	
	//3.
	int arr[5];
	int* pArr;
	

	for (int i = 0; i < 5; i++)
	{	
		pArr = &arr[i];
		*pArr = i * 3 + 3;//i가 0부터 시작하니깐 +3
		
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);

	}




	return 0;
}