#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, distinction, ans_1, ans_2;

	printf("aの値:");
	scanf("%lf",&a);
	if(a == 0){
		printf("2次方程式ではありません\n");
	}else{
		printf("bの値:");
		scanf("%lf",&b);
		printf("cの値:");
		scanf("%lf",&c);
		distinction = pow(b, 2) - (4 * a * c);
		if(distinction > 0){
			printf("実数解が2個あります\n");
			ans_1 = (-b + sqrt(distinction)) / (2 * a);
			ans_2 = (-b - sqrt(distinction)) / (2 * a);
			printf("実数解は%fと%fです\n",ans_1 ,ans_2);
		}else if(distinction == 0){
			printf("実数解が1個あります\n");
			ans_1 = -b / (2 * a);
			printf("実数解は%fです\n",ans_1);
		}else{
			printf("実数解はありません\n");
		}
	}
}