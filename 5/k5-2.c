#include <stdio.h>

int main()
{
	/*変数宣言*/
	int num, i, j;

	/*数値入力*/
	printf("3〜20の整数:");
	scanf("%d",&num);

	/*判定*/
	if((3 <= num) && (num <= 20)){
		/*上昇部*/
		for(i = 1; i <= num; i++){
			for(j = 1; j <= i; j++){
				printf("%d ",j);
			}
			printf("\n");
		}

		/*下降部*/
		for(i = num - 1; 1 <= i; i--){
			for(j = 1; j <= i; j++){
				printf("%d ",j);
			}
			printf("\n");
		}
	}else{
		printf("範囲外の値が入力されています\n");
	}
}