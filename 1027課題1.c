#include<stdio.h>

int main(void)
{
	int a,b,c;
	printf("Please Enter Number a");
	scanf_s("%d", &a);
	printf("Please Enter Number b");
	scanf_s("%d",&b);

	c = a * b / 2;
	printf( "��ӂ�%d,������%d�̎O�p�`�̖ʐς�%d",a,b,c);
	
	return 0;


}

