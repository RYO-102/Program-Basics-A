#include <stdio.h>

int main()
{
	int b,p;

	printf("�c�z:");
	scanf("%d",&b);
	while(1000 <= b){
		printf("�x�����z:");
		scanf("%d",&p);
		if(b < p){
			printf("�c�z������܂���!\n");
		}else{
			b -= p;
			printf("�c�z��%d�~�ł�\n",b);
		}
	}
	printf("�`���[�W���Ă�������\n");
}