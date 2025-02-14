#include <stdio.h>

int main()
{
	/*変数宣言*/
	int num, remain_0, remain_1, remain_2, i;

	/*0代入*/
	remain_0 = 0;
	remain_1 = 0;
	remain_2 = 0;

	/*数値の入力*/
	for(i = 1; i <= 10; i++){
		printf("自然数:");
		scanf("%d",&num);
		/*余り判定*/
		switch(num % 3){
			case 0:
				remain_0++;
				break;
			case 1:
				remain_1++;
				break;
			default:
				remain_2++;
				break;
		}
	}

	/*結果の出力*/
	printf("あまりが0の自然数は%d個\n",remain_0);
	printf("あまりが1の自然数は%d個\n",remain_1);
	printf("あまりが2の自然数は%d個\n",remain_2);
}