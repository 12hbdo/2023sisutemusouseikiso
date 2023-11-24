#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[100];
	int i, j, k, b, c, d, e;
	b = 0;
	d = 0;
	e = 0;
	printf("Enter passward");
	scanf("%99s", &a);
	c = strlen(a);
	for (i = 0; i < c; i = i + 1) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			b = b + 1;
		}
	}
	for (j = 0; j < c; j = j + 1) {
		if (a[j] >= 'a' && a[j] <= 'z') {
			d = d + 1;
		}
	}
	for (k = 0; k < c; k = k + 1) {
		if (a[k] < 'a' && a[k] > 'z' && a[k] < 'A' && a[k]>'Z') {
			e = e + 1;
		}

	}




	if (b = 0) {
		printf("大文字が含まれていません");
	}
	if (d = 0) {
		printf("小文字が含まれていない");
	}
	if (e = 0) {
		printf("小文字でも大文字でもない字が含まれていません");
	}
	if (c < 8) {
		printf("パスワードが短すぎます");
	}
	if (c > 16) {
		printf("パスワードが長すぎます");
	}
	if (b > 0 && d > 0 && e > 0 && 7 < c < 17)
	{
		printf("問題ないパスワードです");
	}


	return 0;

}
