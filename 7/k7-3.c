#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int t,c;
	c=0;
	double p,h;

	srand((unsigned)time(NULL));
	do{
		printf("���I�m��:");
		scanf("%lf",&p);
		if((p < 0) || (1 < p)){
			printf("0�ȏ�1�ȉ��̐��l����͂��Ă�������\n");
		}
	}while((p < 0) || (1 < p));

	for(t = 1; t <= 10; t++){
		h = (double)rand() / RAND_MAX;
		if(h <= p){
			printf("%d���:������!\n",t);
			c++;
		}else{
			printf("%d���:�͂���\n",t);
		}
	}
	printf("%d�񂠂���܂���\n",c);
}