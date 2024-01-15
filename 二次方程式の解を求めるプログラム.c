#include<stdio.h>
#include<math.h>

int D(int a,int b,int c)
{
	return b * b - 4 * a * c;
}
float x1(int a, int b, int c)
{
	float d;
	d = -b + sqrt(D(a, b, c));
	return d / 2 / a;
}
float x2(int a, int b, int c)
{
	float d;
	d = -b - sqrt(D(a, b, c));
	return d / 2 / a;
}
int main(void)
{
	int i, a, b, c;
	for (i = 0; i >= 0; i = i + 1) {
		printf("enter a");
		scanf_s("%d", &a);
		if (a == 0) {
			printf("0ˆÈŠO‚ğ‹L“ü‚µ‚Ä‚­‚¾‚³‚¢");
		}
		else
		{
			break;
		}
	}
	printf("enter b");
	scanf_s("%d", &b);
	printf("enter c");
	scanf_s("%d", &c);

	if (D(a, b, c) > 0) {
		printf("“ñŸ•û’ö®‚Ì‰ğ‚Í%f,%f‚Ì“ñ‚Â‚Å‚·", x1(a, b, c), x2(a, b, c));
	}
	else if (D(a, b, c) == 0) {
		printf("“ñŸ•û’ö®‚Ì‰ğ‚Í%f‚Ìˆê‚Â‚Å‚·", x1(a, b, c));
	}
	else {
		printf("“ñŸ•û’ö®‚Í‰ğ‚ğ‚¿‚Ü‚¹‚ñ");
	}

	return 0;
}

	

		
	
	
