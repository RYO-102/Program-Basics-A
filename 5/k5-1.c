#include <stdio.h>

int main()
{
	int month;

	printf("���܂ꂽ��:");
	scanf("%d",&month);

	switch(month){
		case 1:
			printf("�~�ɐ��܂�܂���\n");
			break;
		case 2:
			printf("�~�ɐ��܂�܂���\n");
			break;
		case 3:
			printf("�t�ɐ��܂�܂���\n");
			break;
		case 4:
			printf("�t�ɐ��܂�܂���\n");
			break;
		case 5:
			printf("�t�ɐ��܂�܂���\n");
			break;
		case 6:
			printf("�Ăɐ��܂�܂���\n");
			break;
		case 7:
			printf("�Ăɐ��܂�܂���\n");
			break;
		case 8:
			printf("�Ăɐ��܂�܂���\n");
			break;
		case 9:
			printf("�H�ɐ��܂�܂���\n");
			break;
		case 10:
			printf("�H�ɐ��܂�܂���\n");
			break;
		case 11:
			printf("�H�ɐ��܂�܂���\n");
			break;
		case 12:
			printf("�~�ɐ��܂�܂���\n");
			break;
		default:
			printf("�͈͊O�̒l�����͂���Ă��܂�\n");
			break;
	}
}