#include <stdio.h>

int main()
{
	/*�ϐ��錾*/
	int balance, price;

	/*������*/
	balance = 10000;

	/*�c�z��0���傫���Ȃ�p��*/
	while(0 < balance){
		/*�c�z�̊m�F�Ǝx�����z�̓���*/
		printf("�c�z��%d�~�ł�\n",balance);
		printf("�x�����z:");
		scanf("%d",&price);

		/*�x�����z���c�z�������Ă��邩����*/
		if(balance < price){
			printf("�c�z������܂���!\n");
		}else{
			/*�c�z����x�����z������*/
			balance -= price;
		}
	}
	/*�I�����b�Z*/
	printf("�c�z��0�~�ɂȂ�܂���\n");
	printf("�I�����܂�\n");
}