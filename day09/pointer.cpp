#include<stdio.h>

int main()
{	
	//2+3=5 �ΰ�: ����(��)+���(��)
	//2+3=5 ��ǻ��: ����(cpu)+���(ram)
	//printf("%d", &a); 
	//&(�ּ� ������):������ �ּڰ��� �˷���
	//*(������ ������):�ּڰ��� ���,�ű⿡ ��� ���� ������

	/*int a = 1;
	int* pa;
	pa = &a;
	printf("%d\n", *pa);
	*pa = 7;
	printf("%d", a);*/
	


	int m = 20;
	int* pm;
	pm = &m;

	printf("m�� ���� %d\n", m);
	printf("pm�� ����Ű�� �ּҰ��� %d\n", pm);
	printf("pm�� ����Ű�� �����Ͱ��� %d\n", *pm);












	return 0;

}