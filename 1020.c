#include<stdio.h>

int main(void)
{
	int a,b,c,i;
	printf("Enter number:");
	scanf_s("%d", &a);
	printf("Enter number:");
	scanf_s("%d", &b);
	c = 1;

	for (i = 1;i <= b;i = i + 1) {		/*1からbまで繰り返す*/
		c=a*c;							/*b回aを乗算する*/
	}
	printf("%d",c);						/*aのb乗を計算し表示する*/
	
	return 0;

}
