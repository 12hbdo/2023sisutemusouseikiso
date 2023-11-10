/*1~10000までで、13と17で割れる数字を表示するプログラム*/
#include <stdio.h>

int main(void)
{
	int i;
	for (i = 1; i <= 10000; i = i + 1) {		/*1から10000まで繰り返す*/
		if (i % 13 == 0) {						/*13で割った余りが0なら表示*/
			printf("%d.", i);
		}
		else if (i % 17 == 0) {					/*17で割った余りが0なら表示*/
			printf("%d.", i);
		}
	}
	return 0;
}