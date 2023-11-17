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
		printf("‘å•¶Žš‚ªŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚·");
	}
	else {
		printf("‘å•¶Žš‚ªŠÜ‚Ü‚ê‚Ä‚¢‚È‚¢");
	}
	return 0;

}
