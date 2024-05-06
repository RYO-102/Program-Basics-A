#include <stdio.h>
#include <math.h>

typedef struct{
	int x;
	int y;
}point;

double calcDis(point, point);

int main(){
	point A, B;

	printf("点Aのx座標:");
	scanf("%d",&(A.x));
	printf("点Aのy座標:");
	scanf("%d",&(A.y));
	printf("点Bのx座標:");
	scanf("%d",&(B.x));
	printf("点Bのy座標:");
	scanf("%d",&(B.y));

	printf("点Aと点Bの距離は%fです\n",calcDis(A, B));
}

double calcDis(point A, point B){
	double distance;

	distance = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));

	return distance;
}