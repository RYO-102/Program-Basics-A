#include <stdio.h>

typedef struct{
	double X;
	double Y;
}point;

point input_coordinate(void);
point center_point(point A, point B);

int main(){
	point A, B, center;

	printf("点A\n");
	A = input_coordinate();
	printf("点B\n");
	B = input_coordinate();

	center = center_point(A, B);
	printf("点Aと点Bの中点は(%f, %f)です\n",center.X, center.Y);
}

point input_coordinate(void){
	point input;

	printf("x座標:");
	scanf("%lf",&input.X);
	printf("y座標:");
	scanf("%lf",&input.Y);

	return input;
}

point center_point(point A, point B){
	point calculated_point;

	calculated_point.X = (A.X + B.X) / 2.0;
	calculated_point.Y = (A.Y + B.Y) / 2.0;

	return calculated_point;
}