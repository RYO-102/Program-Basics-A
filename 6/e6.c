#include <stdio.h>

int main()
{
	int in_num, i;

	printf("2〜15の整数:");
	scanf("%d",&in_num);
	i = 1;

	if((2 <= in_num) && (in_num <= 15)){
		while(i <= in_num){
			printf("%d ",i);
			i++;
		}
		printf("\n");
	}else{
		printf("範囲外の値が入力されています\n");
	}
}