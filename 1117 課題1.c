#include<stdio.h>
#include <ctype.h>


int main(void)
{
	char a[31];
	int i,b;
	b = 1;

	printf("Enter string");
	scanf_s("%c", &a);
	for (i = 0; i <= 31; i = i + 1) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			b =b*0;
		}
		
	}
	if (b == 0) {
		printf("大文字が含まれています");
	}
	else {
		printf("大文字が含まれていない");
	}
	return 0;

}
