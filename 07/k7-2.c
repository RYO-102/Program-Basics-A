#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*•Ï”éŒ¾*/
	int random, answer;

	/*—”*/
	srand((unsigned)time(NULL));
	random = rand() % 6 + 1;

	do{
		/*“š‚¦‚Ì“ü—Í*/
		printf("1`6‚Ì”:");
		scanf("%d",&answer);

		/*‘å¬‚Ì”»’f*/
		if(answer > random){
			printf("‚à‚Á‚Æ¬‚³‚¢”‚Å‚·\n");
		}else if(answer < random){
			printf("‚à‚Á‚Æ‘å‚«‚¢”‚Å‚·\n");
		}
	}while(answer != random);	//“š‚¦‚Æo—Í‚µ‚½—”‚ªˆê’v‚·‚é‚Ü‚Å‘±s
	printf("³‰ğ‚Å‚·\n");
}