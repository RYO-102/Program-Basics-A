#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*�ϐ��錾*/
	int random, answer;

	/*����*/
	srand((unsigned)time(NULL));
	random = rand() % 6 + 1;

	do{
		/*�����̓���*/
		printf("1�`6�̐�:");
		scanf("%d",&answer);

		/*�召�̔��f*/
		if(answer > random){
			printf("�����Ə��������ł�\n");
		}else if(answer < random){
			printf("�����Ƒ傫�����ł�\n");
		}
	}while(answer != random);	//�����Əo�͂�����������v����܂ő��s
	printf("�����ł�\n");
}