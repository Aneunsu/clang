#include<stdio.h>

int main()
{
	//1. ������ ���� a�� �����ؼ�, �����͸� ����Ͽ� ���� 100���� �ٲٱ�
	//2. ������ ���� b,c,�� ���� 3,5�� �ʱ�ȭ�ϰ�, �����͸� ����ؼ� ���� �ٲٱ�
	//3. ������ �迭 ���� arr[5]�� �����ؼ� �����͸� ����ؼ� 3�� ����� ä���

	//1. 
	int a = 6;										//int a;
	int* pa;										//int *pa;
	pa = &a;										//pa=&a;
	a = 100;										//*pa=100;
	printf("%d\n", *pa);							//printf("%d\n",a);

	//2.
	int b = 3, c = 5, temp;
	int* p;
	p = &b;//�ּڰ� b
	temp = *p;//temp==3
	p = &c;//�ּڰ� 3
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
		*pArr = i * 3 + 3;//i�� 0���� �����ϴϱ� +3
		
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);

	}




	return 0;
}