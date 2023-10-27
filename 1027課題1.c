#include<stdio.h>

int main(void)
{
	int a,b,c;
	printf("Please Enter Number a");
	scanf_s("%d", &a);
	printf("Please Enter Number b");
	scanf_s("%d",&b);

	c = a * b / 2;
	printf( "’ê•Ó‚ª%d,‚‚³‚ª%d‚ÌOŠpŒ`‚Ì–ÊÏ‚Í%d",a,b,c);
	
	return 0;


}

