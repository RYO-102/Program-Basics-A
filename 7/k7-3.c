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
		printf("“–‘IŠm—¦:");
		scanf("%lf",&p);
		if((p < 0) || (1 < p)){
			printf("0ˆÈã1ˆÈ‰º‚Ì”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		}
	}while((p < 0) || (1 < p));

	for(t = 1; t <= 10; t++){
		h = (double)rand() / RAND_MAX;
		if(h <= p){
			printf("%d‰ñ–Ú:‚ ‚½‚è!\n",t);
			c++;
		}else{
			printf("%d‰ñ–Ú:‚Í‚¸‚ê\n",t);
		}
	}
	printf("%d‰ñ‚ ‚½‚è‚Ü‚µ‚½\n",c);
}