#include <stdio.h>

int main()
{
	/*�ϐ��錾*/
	int year;

	/*�l�̓���*/
	printf("���܂ꂽ�N(����):");
	scanf("%d",&year);

	/*���蕔*/
	if(year <= 1988){
		printf("���a�ȑO�ɐ��܂�܂���\n");
	}else if(year == 1989){
		printf("���a�������ɐ��܂�܂���\n");
	}else if((1990 <= year) && (year <= 2018)){
		printf("�����ɐ��܂�܂���\n");
	}else if(year == 2019){
		printf("�������ߘa�ɐ��܂�܂���\n");
	}else if((2020 <= year) && (year <= 2024)){
		printf("�ߘa�ɐ��܂�܂���\n");
	}else{
		printf("�܂����܂�Ă��܂���\n");
	}
}