#include <stdio.h>

int main()
{
	int b,p,cash;

	b = 10000;
	while(0 < b){
		printf("残額は%d円です\n",b);
		printf("支払金額:");
		scanf("%d",&p);
		if(b < p){
			printf("残額が足りません!\n");
		}else{
			b -= p;
			cash = p / 1000;
			b += cash * 100;
		}
	}
	printf("残額が0円になりました\n");
	printf("終了します\n");
}