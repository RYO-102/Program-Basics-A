#include <stdio.h>
#include <math.h>

typedef struct{
	int x;
	int y;
}point;

double calcDis(point, point);

int main(){
	point A, B;

	printf("�_A��x���W:");
	scanf("%d",&(A.x));
	printf("�_A��y���W:");
	scanf("%d",&(A.y));
	printf("�_B��x���W:");
	scanf("%d",&(B.x));
	printf("�_B��y���W:");
	scanf("%d",&(B.y));

	printf("�_A�Ɠ_B�̋�����%f�ł�\n",calcDis(A, B));
}

double calcDis(point A, point B){
	double distance;

	distance = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));

	return distance;
}