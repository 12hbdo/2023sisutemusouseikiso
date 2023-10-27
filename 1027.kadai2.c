#include <stdio.h>

int main(void)
{
	int a;
	printf("Please Enter Number a");
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("%d‚Í‹ô”‚Å‚·", a);
	}
	else {


		printf("%d‚ÍŠï”‚Å‚·", a);
	}
	return 0;
}