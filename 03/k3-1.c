#include <stdio.h>

int main()
{
	double num_1, num_2, num_3, sum, ave;

	printf("1�ڂ̎���:");
	scanf("%lf",&num_1);
	printf("2�ڂ̎���:");
	scanf("%lf",&num_2);
	printf("3�ڂ̎���:");
	scanf("%lf",&num_3);
	sum = num_1 + num_2 + num_3;
	ave = sum / 3.0;
	printf("���v:%f, ����:%f\n",sum, ave);
}