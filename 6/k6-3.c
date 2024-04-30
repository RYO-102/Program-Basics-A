#include <stdio.h>

int main()
{
	int b,p,cash;

	b = 10000;
	while(0 < b){
		printf("ŽcŠz‚Í%d‰~‚Å‚·\n",b);
		printf("Žx•¥‹àŠz:");
		scanf("%d",&p);
		if(b < p){
			printf("ŽcŠz‚ª‘«‚è‚Ü‚¹‚ñ!\n");
		}else{
			b -= p;
			cash = p / 1000;
			b += cash * 100;
		}
	}
	printf("ŽcŠz‚ª0‰~‚É‚È‚è‚Ü‚µ‚½\n");
	printf("I—¹‚µ‚Ü‚·\n");
}