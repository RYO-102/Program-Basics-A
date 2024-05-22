#include <stdio.h>

typedef struct{
	double X;
	double Y;
}point;

point input_coordinate(void);
point center_point(point A, point B);

int main(){
	point A, B, center;

	printf("�_A\n");
	A = input_coordinate();
	printf("�_B\n");
	B = input_coordinate();

	center = center_point(A, B);
	printf("�_A�Ɠ_B�̒��_��(%f, %f)�ł�\n",center.X, center.Y);
}

point input_coordinate(void){
	point input;

	printf("x���W:");
	scanf("%lf",&input.X);
	printf("y���W:");
	scanf("%lf",&input.Y);

	return input;
}

point center_point(point A, point B){
	point calculated_point;

	calculated_point.X = (A.X + B.X) / 2.0;
	calculated_point.Y = (A.Y + B.Y) / 2.0;

	return calculated_point;
}