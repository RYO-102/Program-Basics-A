#include <stdio.h>

int main()
{
	double num_1, num_2, num_3, num_4, num_5, sum, ave, sum_squares, var;

	/*���͕�*/
	printf("1�ڂ̎���:");
	scanf("%lf",&num_1);
	printf("2�ڂ̎���:");
	scanf("%lf",&num_2);
	printf("3�ڂ̎���:");
	scanf("%lf",&num_3);
	printf("4�ڂ̎���:");
	scanf("%lf",&num_4);
	printf("5�ڂ̎���:");
	scanf("%lf",&num_5);

	/*�v�Z��*/
	sum = num_1 + num_2 + num_3 + num_4 + num_5;
	ave = sum / 5.0;
	sum_squares = (num_1 * num_1) + (num_2 * num_2) + (num_3 * num_3) + (num_4 * num_4) + (num_5 * num_5);
	var = (sum_squares / 5.0) - (ave * ave);

	/*�o�͕�*/
	printf("���v:%f, ����:%f\n",sum, ave);
	printf("2��a:%f, ���U:%f\n",sum_squares, var);
}