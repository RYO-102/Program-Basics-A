#include <stdio.h>

int main()
{
	double num_1, num_2, num_3, sum, ave;

	printf("1個目の実数:");
	scanf("%lf",&num_1);
	printf("2個目の実数:");
	scanf("%lf",&num_2);
	printf("3個目の実数:");
	scanf("%lf",&num_3);
	sum = num_1 + num_2 + num_3;
	ave = sum / 3.0;
	printf("合計:%f, 平均:%f\n",sum, ave);
}