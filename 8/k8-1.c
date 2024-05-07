#include <stdio.h>

int main(){
	int num[4];
	int i;
	
	for (i = 0; i < 4; i++){
		printf("%dŒÂ–Ú‚Ì®”:",i + 1);
		scanf("%d",&num[i]);
	}
	printf("Œ‹‰Ê\n");
	for (i = 3; i >= 0; i--){
		printf("%d\n",num[i]);
	}
}