#include <stdio.h>

int main()
{
	/*�ϐ��錾*/
	int balance, price, cash_back;

	/*������*/
	balance = 10000;

	/*�c�z��0���傫���Ƃ��p��*/
	while(0 < balance){
		/*�c�z�̊m�F�Ǝx�����z�̓���*/
		printf("�c�z��%d�~�ł�\n",balance);
		printf("�x�����z:");
		scanf("%d",&price);

		/*�c�z���x�����z�������Ă��邩����*/
		if(balance < price){
			printf("�c�z������܂���!\n");
		}else{
			/*�c�z����x�����z�������A�L���b�V���o�b�N*/
			balance -= price;
			cash_back = price / 1000;
			balance += cash_back * 100;
		}
	}
	/*�I�����b�Z*/
	printf("�c�z��0�~�ɂȂ�܂���\n");
	printf("�I�����܂�\n");
}