#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) 
{
	srand(time(0));
	int intelligence, stamina, charisma,i,j;
	intelligence = (rand() % 20) + 1;
	stamina = (rand() % (20 - intelligence)) + 1;
	charisma = 20 - intelligence - stamina;

	for (i = 20; i >=0; i = i - 1) {
		if (i == intelligence) {
			j = 1;
			break;
		}
		else if(i == stamina) {
			j = 2;
			break;
		}
		else if (i == charisma) {
			j = 3;
			break;
		}
	}
	if (j == 1) {
		printf("記憶力%d、瞬発力%d、魅力%dであなたはmageです", intelligence, stamina, charisma);
	}
	else if (j == 2) {
		printf("記憶力%d、瞬発力%d、魅力%dであなたはknightです", intelligence, stamina, charisma);
	}
	else if (j == 3) {
		printf("記憶力%d、瞬発力%d、魅力%dであなたはthierです", intelligence, stamina, charisma);
	}
	return 0;
}
