#include <stdio.h>

int main()
{
	/*�ϐ��錾*/
	int num, i, j;

	/*���l����*/
	printf("3�`20�̐���:");
	scanf("%d",&num);

	/*����*/
	if((3 <= num) && (num <= 20)){
		/*�㏸��*/
		for(i = 1; i <= num; i++){
			for(j = 1; j <= i; j++){
				printf("%d ",j);
			}
			printf("\n");
		}

		/*���~��*/
		for(i = num - 1; 1 <= i; i--){
			for(j = 1; j <= i; j++){
				printf("%d ",j);
			}
			printf("\n");
		}
	}else{
		printf("�͈͊O�̒l�����͂���Ă��܂�\n");
	}
}