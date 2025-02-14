#include <stdio.h>

int main(){
	/*•Ï”éŒ¾*/
	int num[4];
	int i;

	/*“ü—Í•”*/
	for (i = 0; i < 4; i++){
		printf("%dŒÂ–Ú‚Ì®”:",i + 1);
		scanf("%d",&num[i]);
	}

	/*Œ‹‰Êo—Í*/
	printf("Œ‹‰Ê\n");
	for (i = 3; i >= 0; i--){
		printf("%d\n",num[i]);
	}
}