#include <stdio.h>

int main(){
	int num[4];
	int i;
	
	for (i = 0; i < 4; i++){
		printf("%d�ڂ̐���:",i + 1);
		scanf("%d",&num[i]);
	}
	printf("����\n");
	for (i = 3; i >= 0; i--){
		printf("%d\n",num[i]);
	}
}