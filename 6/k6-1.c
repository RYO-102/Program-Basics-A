#include <stdio.h>

int main()
{
	int b, p;

	b = 10000;
	while(0 < b){
		printf("ŽcŠz‚Í%d‰~‚Å‚·\n",b);
		printf("Žx•¥‹àŠz:");
		scanf("%d",&p);
		if(b < p){
			printf("ŽcŠz‚ª‘«‚è‚Ü‚¹‚ñ!\n");
		}else{
			b -= p;
		}
	}
	printf("ŽcŠz‚ª0‰~‚É‚È‚è‚Ü‚µ‚½\n");
	printf("I—¹‚µ‚Ü‚·\n");
}