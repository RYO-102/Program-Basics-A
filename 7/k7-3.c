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
		printf("当選確率:");
		scanf("%lf",&p);
		if((p < 0) || (1 < p)){
			printf("0以上1以下の数値を入力してください\n");
		}
	}while((p < 0) || (1 < p));

	for(t = 1; t <= 10; t++){
		h = (double)rand() / RAND_MAX;
		if(h <= p){
			printf("%d回目:あたり!\n",t);
			c++;
		}else{
			printf("%d回目:はずれ\n",t);
		}
	}
	printf("%d回あたりました\n",c);
}