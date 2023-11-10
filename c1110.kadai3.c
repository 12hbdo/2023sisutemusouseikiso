/*課題3 ifでゲームを作る*/
#include <stdio.h>
int main(void)
{
	int a;

	printf("12+5=?");			/*クイズを出題*/
	scanf_s("%d", &a);			/*回答を入力*/

	if (a == 17) {				/*あっていれば○*/
		printf("○");
	}
	else{						/*間違ってれば×*/
		printf("×");
	}
	return 0;
}