#include <stdio.h>

int main()
{
	double num_1, num_2, num_3, sum, ave;

	printf("1ŒÂ–Ú‚ÌÀ”:");
	scanf("%lf",&num_1);
	printf("2ŒÂ–Ú‚ÌÀ”:");
	scanf("%lf",&num_2);
	printf("3ŒÂ–Ú‚ÌÀ”:");
	scanf("%lf",&num_3);
	sum = num_1 + num_2 + num_3;
	ave = sum / 3.0;
	printf("‡Œv:%f, •½‹Ï:%f\n",sum, ave);
}