#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[100];
	int i, b, c, d, e;
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
		else if(a[i] >= 'a' && a[i] <= 'z'){
		    d=d+1;
		}
		else
		    e=e+1;
	}
	
	if(c<=7){
	    printf("パスワードが短すぎます");
	}
    if(c>=17){
	    printf("パスワードが長すぎます");
	}
	if(b=0){
	    printf("大文字が含まれていません");
	}
	if(d=0){
	    printf("小文字が含まれていません");
	}
	if(e=0){
	    printf("大文字でも小文字でもない文字が含まれていません");
	}

	
	if (b > 0 || d > 0 || e > 0 || 7 < c|| c < 17)
	{
		printf("問題ないパスワードです");
	}


	return 0;

}

