#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int r, ans;

	srand((unsigned)time(NULL));
	r = rand() % 6 + 1;

	do{
		printf("1〜6の数:");
		scanf("%d",&ans);
		if(ans > r){
			printf("もっと小さい数です\n");
		}else if(ans < r){
			printf("もっと大きい数です\n");
		}
	}while(ans != r);
	printf("正解です\n");
}