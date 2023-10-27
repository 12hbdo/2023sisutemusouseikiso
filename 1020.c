#include<stdio.h>

int main(void)
{
	int a,b,c,i;
	printf("Enter number:");
	scanf_s("%d", &a);
	printf("Enter number:");
	scanf_s("%d", &b);
	c = 1;

	for (i = 1;i <= b;i = i + 1) {		/*1‚©‚çb‚Ü‚ÅŒJ‚è•Ô‚·*/
		c=a*c;							/*b‰ña‚ðæŽZ‚·‚é*/
	}
	printf("%d",c);						/*a‚Ìbæ‚ðŒvŽZ‚µ•\Ž¦‚·‚é*/
	
	return 0;

}
