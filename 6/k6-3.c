#include <stdio.h>

int main()
{
	int b,p,cash;

	b = 10000;
	while(0 < b){
		printf("�c�z��%d�~�ł�\n",b);
		printf("�x�����z:");
		scanf("%d",&p);
		if(b < p){
			printf("�c�z������܂���!\n");
		}else{
			b -= p;
			cash = p / 1000;
			b += cash * 100;
		}
	}
	printf("�c�z��0�~�ɂȂ�܂���\n");
	printf("�I�����܂�\n");
}