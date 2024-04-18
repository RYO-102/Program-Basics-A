#include <stdio.h>

int main()
{
	double num_1, num_2, num_3, num_4, num_5, sum, ave, sum_squares, var;

	/*“ü—Í•”*/
	printf("1ŒÂ–Ú‚ÌÀ”:");
	scanf("%lf",&num_1);
	printf("2ŒÂ–Ú‚ÌÀ”:");
	scanf("%lf",&num_2);
	printf("3ŒÂ–Ú‚ÌÀ”:");
	scanf("%lf",&num_3);
	printf("4ŒÂ–Ú‚ÌÀ”:");
	scanf("%lf",&num_4);
	printf("5ŒÂ–Ú‚ÌÀ”:");
	scanf("%lf",&num_5);

	/*ŒvZ•”*/
	sum = num_1 + num_2 + num_3 + num_4 + num_5;
	ave = sum / 5.0;
	sum_squares = (num_1 * num_1) + (num_2 * num_2) + (num_3 * num_3) + (num_4 * num_4) + (num_5 * num_5);
	var = (sum_squares / 5.0) - (ave * ave);

	/*o—Í•”*/
	printf("‡Œv:%f, •½‹Ï:%f\n",sum, ave);
	printf("2æ˜a:%f, •ªU:%f\n",sum_squares, var);
}