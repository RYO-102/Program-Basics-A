#include <stdio.h>
#include <math.h>

int main()
{
	double a[3] = {2.5, 3.2, 5.1};
	double b[3] = {1.2, 6.6, 3.4};
	double sum[3];
	double length_a = 0.0, length_b = 0.0;
	double inner_product = 0.0;
	int i;

	for(i = 0; i < 3; i++){
		sum[i] = a[i] + b[i];
		length_a += pow(a[i], 2);
		length_b += pow(b[i], 2);
		inner_product += a[i] * b[i];
	}

	length_a = sqrt(length_a);
	length_b = sqrt(length_b);

	printf("ベクトルAの長さ:%f\n",length_a);
	printf("ベクトルBの長さ:%f\n",length_b);
	printf("ベクトルAとベクトルBの内績:%f\n",inner_product);
	printf("ベクトルAとベクトルBの和:(%f, %f, %f)\n",sum[0], sum[1], sum[2]);
}