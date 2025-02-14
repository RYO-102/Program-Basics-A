#include <stdio.h>

int main()
{
	int num;

	printf("®”:");
	scanf("%d",&num);
	if(num < 0){
		printf("•‰‚Ì®”‚Å‚·\n");
	}else if(num > 0){
		printf("³‚Ì®”‚Å‚·\n");
	}else{
		printf("ƒ[ƒ‚Å‚·\n");
	}
}