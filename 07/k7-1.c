#include <stdio.h>
#include <math.h>

int main()
{
	/*�ϐ��錾*/
	double a, b, c, distinction, answer_1, answer_2;

	/*���l����*/
	printf("a�̒l:");
	scanf("%lf",&a);

	/*a���[���ł���ꍇ�̏���*/
	if(a == 0){
		printf("2���������ł͂���܂���\n");
	}else{
		/*���l����*/
		printf("b�̒l:");
		scanf("%lf",&b);
		printf("c�̒l:");
		scanf("%lf",&c);

		/*���ʎ��̌v�Z*/
		distinction = pow(b, 2) - (4 * a * c);

		/*����2��*/
		if(distinction > 0){
			/*����,�v�Z,���̏o��*/
			printf("��������2����܂�\n");
			answer_1 = (-b + sqrt(distinction)) / (2 * a);
			answer_2 = (-b - sqrt(distinction)) / (2 * a);
			printf("��������%f��%f�ł�\n",answer_1 ,answer_2);
		/*����1��*/
		}else if(distinction == 0){
			printf("��������1����܂�\n");
			answer_1 = -b / (2 * a);
			printf("��������%f�ł�\n",answer_1);
		/*���Ȃ�*/
		}else{
			printf("�������͂���܂���\n");
		}
	}
}