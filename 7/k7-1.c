#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, distinction, ans_1, ans_2;

	printf("a�̒l:");
	scanf("%lf",&a);
	if(a == 0){
		printf("2���������ł͂���܂���\n");
	}else{
		printf("b�̒l:");
		scanf("%lf",&b);
		printf("c�̒l:");
		scanf("%lf",&c);
		distinction = pow(b, 2) - (4 * a * c);
		if(distinction > 0){
			printf("��������2����܂�\n");
			ans_1 = (-b + sqrt(distinction)) / (2 * a);
			ans_2 = (-b - sqrt(distinction)) / (2 * a);
			printf("��������%f��%f�ł�\n",ans_1 ,ans_2);
		}else if(distinction == 0){
			printf("��������1����܂�\n");
			ans_1 = -b / (2 * a);
			printf("��������%f�ł�\n",ans_1);
		}else{
			printf("�������͂���܂���\n");
		}
	}
}