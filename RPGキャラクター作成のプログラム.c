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
		printf("�L����%d�A�u����%d�A����%d�ł��Ȃ���mage�ł�", intelligence, stamina, charisma);
	}
	else if (j == 2) {
		printf("�L����%d�A�u����%d�A����%d�ł��Ȃ���knight�ł�", intelligence, stamina, charisma);
	}
	else if (j == 3) {
		printf("�L����%d�A�u����%d�A����%d�ł��Ȃ���thier�ł�", intelligence, stamina, charisma);
	}
	return 0;
}
