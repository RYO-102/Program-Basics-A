#include <stdio.h>

int main()
{
	int b,p;

	printf("残額:");
	scanf("%d",&b);
	while(1000 <= b){
		printf("支払金額:");
		scanf("%d",&p);
		if(b < p){
			printf("残額が足りません!\n");
		}else{
			b -= p;
			printf("残額は%d円です\n",b);
		}
	}
	printf("チャージしてください\n");
}