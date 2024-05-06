#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*変数宣言*/
	int time_number, count;
	double probability, hit;

	/*初期化*/
	count = 0;

	/*乱数設定*/
	srand((unsigned)time(NULL));

	/*当選確率が0～1に収まるまで続行*/
	do{
		printf("当選確率:");
		scanf("%lf",&probability);
		if((probability < 0) || (1 < probability)){
			printf("0以上1以下の数値を入力してください\n");
		}
	}while((probability < 0) || (1 < probability));

	/*くじ引き*/
	for(time_number = 1; time_number <= 10; time_number++){
		/*乱数出力*/
		hit = (double)rand() / RAND_MAX;

		/*当選確率以下であればあたり*/
		if(hit <= probability){
			printf("%d回目:あたり!\n",time_number);
			count++;
		}else{
			printf("%d回目:はずれ\n",time_number);
		}
	}
	/*あたり回数の表示*/
	printf("%d回あたりました\n",count);
}