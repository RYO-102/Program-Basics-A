#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int r, ans;

	srand((unsigned)time(NULL));
	r = rand() % 6 + 1;

	do{
		printf("1`6‚Ì”:");
		scanf("%d",&ans);
		if(ans > r){
			printf("‚à‚Á‚Æ¬‚³‚¢”‚Å‚·\n");
		}else if(ans < r){
			printf("‚à‚Á‚Æ‘å‚«‚¢”‚Å‚·\n");
		}
	}while(ans != r);
	printf("³‰ğ‚Å‚·\n");
}