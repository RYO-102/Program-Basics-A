#include <stdio.h>

int main()
{
	/*�ϐ��錾*/
	int num, remain_0, remain_1, remain_2, i;

	/*0���*/
	remain_0 = 0;
	remain_1 = 0;
	remain_2 = 0;

	/*���l�̓���*/
	for(i = 1; i <= 10; i++){
		printf("���R��:");
		scanf("%d",&num);
		/*�]�蔻��*/
		switch(num % 3){
			case 0:
				remain_0++;
				break;
			case 1:
				remain_1++;
				break;
			default:
				remain_2++;
				break;
		}
	}

	/*���ʂ̏o��*/
	printf("���܂肪0�̎��R����%d��\n",remain_0);
	printf("���܂肪1�̎��R����%d��\n",remain_1);
	printf("���܂肪2�̎��R����%d��\n",remain_2);
}