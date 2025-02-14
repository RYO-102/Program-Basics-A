#include <stdio.h>
#include <math.h>

int main()
{
	/*変数宣言*/
	double a, b, c, distinction, answer_1, answer_2;

	/*数値入力*/
	printf("aの値:");
	scanf("%lf",&a);

	/*aがゼロである場合の処理*/
	if(a == 0){
		printf("2次方程式ではありません\n");
	}else{
		/*数値入力*/
		printf("bの値:");
		scanf("%lf",&b);
		printf("cの値:");
		scanf("%lf",&c);

		/*判別式の計算*/
		distinction = pow(b, 2) - (4 * a * c);

		/*解が2つ*/
		if(distinction > 0){
			/*個数提示,計算,解の出力*/
			printf("実数解が2個あります\n");
			answer_1 = (-b + sqrt(distinction)) / (2 * a);
			answer_2 = (-b - sqrt(distinction)) / (2 * a);
			printf("実数解は%fと%fです\n",answer_1 ,answer_2);
		/*解が1つ*/
		}else if(distinction == 0){
			printf("実数解が1個あります\n");
			answer_1 = -b / (2 * a);
			printf("実数解は%fです\n",answer_1);
		/*解なし*/
		}else{
			printf("実数解はありません\n");
		}
	}
}