//oprtator [������]

//��� ������
//���� ������
//�� ������
//�� ������
// ---------
//���� ������
//-

#include<stdio.h>

int main()
{
	//1. ���� ������
	//- ++.--
	//int a = 1;
	//a++;
	//a++;
	//printf("a:%d\n",a);
	//a--;
	//printf("a:%d\n", a);

	//int b = 0;
	//++b: ���� ������
	//b++: ���� ������
	//printf("b:%d\n", ++b);	//1
	//printf("b:%d\n", b++);	//1	
	//printf("b:%d", ++b);	//3

	//2. ���� ������
	//������ ���ĺ��� �Է��ϰ� �빮���̸� ���� 1�� ��� �ƴϸ� 0 ����ϴ� ���α׷�
	/*char a;
	printf("���ĺ��� �Է��Ͻÿ�:");
	scanf("%c", &a);
	getchar();

	int isCapital= 65 <= a && a <= 90 ? 1 : 0;
	printf("���:%d", isCapital);*/

	//������ ���� �ϳ� �Է��ϰ� ���ĺ��̸� ���� 1�� ��� �ƴϸ� 0 ����ϴ� ���α׷�
	/*char b;
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%c", &b);
	getchar();

	int isCapital = (65 <= b && b <= 90);
	int isLower = (97 <= b && b <= 122);
	int c = isCapital || isLower;

	int result= c ? 1 : 0;
	printf("���:%d", result);*/

	//3. �޸� ������
	//int a, b; //,

	//4. sizeof ������
	//int-4byte, float-4byte, double-8byte, char-1byte

	int m;
	printf("������ m:%d", sizeof(m));


	//5. �ΰ�:����+��� ���� ����
	//��ǻ��:����(cpu), ���(ram) ����
	//int 4byte=32bit=2^32(0~+-2^31)
	//1bit
	//8bit=1byte
	//1024byte=1kb
	//1024kb=1mb
	//1024mb=1gb

	//6. type casting(�� ��ȯ)
	int n = 10;
	double k = (double)n;



	
	return 0;
}