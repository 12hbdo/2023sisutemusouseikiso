#include<stdio.h>

int main(void)
{
	int a,b,c,i;
	printf("Enter number:");
	scanf_s("%d", &a);
	printf("Enter number:");
	scanf_s("%d", &b);
	c = 1;

	for (i = 1;i <= b;i = i + 1) {		/*1����b�܂ŌJ��Ԃ�*/
		c=a*c;							/*b��a����Z����*/
	}
	printf("%d",c);						/*a��b����v�Z���\������*/
	
	return 0;

}
