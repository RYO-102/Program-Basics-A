#include <stdio.h>

int main(){
	/*�ϐ��錾*/
	int num[4];
	int i;

	/*���͕�*/
	for (i = 0; i < 4; i++){
		printf("%d�ڂ̐���:",i + 1);
		scanf("%d",&num[i]);
	}

	/*���ʏo��*/
	printf("����\n");
	for (i = 3; i >= 0; i--){
		printf("%d\n",num[i]);
	}
}