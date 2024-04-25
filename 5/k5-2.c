#include <stdio.h>

int main()
{
	/*•Ï”éŒ¾*/
	int num, i, j;

	/*”’l“ü—Í*/
	printf("3`20‚Ì®”:");
	scanf("%d",&num);

	/*”»’è*/
	if((3 <= num) && (num <= 20)){
		/*ã¸•”*/
		for(i = 1; i <= num; i++){
			for(j = 1; j <= i; j++){
				printf("%d ",j);
			}
			printf("\n");
		}

		/*‰º~•”*/
		for(i = num - 1; 1 <= i; i--){
			for(j = 1; j <= i; j++){
				printf("%d ",j);
			}
			printf("\n");
		}
	}else{
		printf("”ÍˆÍŠO‚Ì’l‚ª“ü—Í‚³‚ê‚Ä‚¢‚Ü‚·\n");
	}
}