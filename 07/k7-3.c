#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*�ϐ��錾*/
	int time_number, count;
	double probability, hit;

	/*������*/
	count = 0;

	/*�����ݒ�*/
	srand((unsigned)time(NULL));

	/*���I�m����0�`1�Ɏ��܂�܂ő��s*/
	do{
		printf("���I�m��:");
		scanf("%lf",&probability);
		if((probability < 0) || (1 < probability)){
			printf("0�ȏ�1�ȉ��̐��l����͂��Ă�������\n");
		}
	}while((probability < 0) || (1 < probability));

	/*��������*/
	for(time_number = 1; time_number <= 10; time_number++){
		/*�����o��*/
		hit = (double)rand() / RAND_MAX;

		/*���I�m���ȉ��ł���΂�����*/
		if(hit <= probability){
			printf("%d���:������!\n",time_number);
			count++;
		}else{
			printf("%d���:�͂���\n",time_number);
		}
	}
	/*������񐔂̕\��*/
	printf("%d�񂠂���܂���\n",count);
}