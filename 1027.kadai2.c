#include <stdio.h>

int main(void)
{
	int a;
	printf("Please Enter Number a");
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("%d�͋����ł�", a);
	}
	else {


		printf("%d�͊�ł�", a);
	}
	return 0;
}