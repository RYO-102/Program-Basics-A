#include <stdio.h>

int main()
{
	/*�ϐ��錾*/
	int balance, price;

	/*�c�z�̓���*/
	printf("�c�z:");
	scanf("%d",&balance);

	/*�c�z��1000���傫���Ƃ��p��*/
	while(1000 <= balance){

		/*�x�����z�̓���*/
		printf("�x�����z:");
		scanf("%d",&price);

		/*�x�����z���c�z�������Ă��邩����*/
		if(balance < price){
			printf("�c�z������܂���!\n");
		}else{
			balance -= price;
			printf("�c�z��%d�~�ł�\n",balance);
		}
	}
	/*�I�����b�Z*/
	printf("�`���[�W���Ă�������\n");
}