/*�ۑ�3 if�ŃQ�[�������*/
#include <stdio.h>
int main(void)
{
	int a;

	printf("12+5=?");			/*�N�C�Y���o��*/
	scanf_s("%d", &a);			/*�񓚂����*/

	if (a == 17) {				/*�����Ă���΁�*/
		printf("��");
	}
	else{						/*�Ԉ���Ă�΁~*/
		printf("�~");
	}
	return 0;
}