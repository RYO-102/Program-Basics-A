#include <stdio.h>

int main()
{
	int x, y, sum;

	printf("1つ目の整数:");
	scanf("%d",&x);
	printf("2つ目の整数:");
	scanf("%d",&y);
	sum = x + y;
	printf("和は%dです",sum);
}