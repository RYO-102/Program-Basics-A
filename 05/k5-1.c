#include <stdio.h>

int main()
{
	int month;

	printf("���܂ꂽ��:");
	scanf("%d",&month);

	switch(month){
		case 1:
		case 2:
		case 12:
			printf("�~�ɐ��܂�܂���\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("�t�ɐ��܂�܂���\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("�Ăɐ��܂�܂���\n");
			break;
		case 9:
		case 10:
		case 11:
			printf("�H�ɐ��܂�܂���\n");
			break;
		default:
			printf("�͈͊O�̒l�����͂���Ă��܂�\n");
			break;
	}
}