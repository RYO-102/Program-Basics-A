#include <stdio.h>

int main()
{
	int num, i;

	printf("3`20‚Ì®”:");
	scanf("%d",&num);

	if((3 <= num) && (num <= 20)){
		for(i = 1; i <= num; i++){
			printf("%d ",i);
		}
		printf("\n");
	}else{
		printf("”ÍˆÍŠO‚Ì’l‚ª“ü—Í‚³‚ê‚Ä‚¢‚Ü‚·\n");
	}
}