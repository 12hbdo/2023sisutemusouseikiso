#include<stdio.h>
#include<float.h>
#define ROW 3
#define COLUMN 4

int main(void)
{
	double a[ROW][COLUMN];
	double b[ROW][COLUMN];
	double c[ROW][COLUMN];
	int i, j;

	printf("% d~%ds—ñA‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n", ROW, COLUMN);
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			printf("A[%d,%d]=", i+1,j+1);
				scanf_s("%lf", &a[i][j]);
		}
	}
	printf("% d~%ds—ñB‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n", ROW, COLUMN);
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			printf("B[%d,%d]=", i+1,j+1);
				scanf_s("%lf", &b[i][j]);
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\C:\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN;j++)
		{
			printf("% 10.5f", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}