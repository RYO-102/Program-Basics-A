#include <stdio.h>

int main()
{
	int num;

	printf("����:");
	scanf("%d",&num);
	if(num < 0){
		printf("���̐����ł�\n");
	}else if(num > 0){
		printf("���̐����ł�\n");
	}else{
		printf("�[���ł�\n");
	}
}