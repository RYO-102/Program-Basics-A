#include <stdio.h>

int main(){
	/*�ϐ��錾�E�z�񏉊���*/
	int score[5][3] = {{9972003, 84, 62}, {9972012, 70, 94}, {9972024, 65, 52}, {9972047, 96, 82}, {9972061, 82, 77}};
	int row, column;
	double english_average, math_avarage;

	/*0���*/
	english_average = 0;
	math_avarage = 0;

	/*���ʏo��*/
	printf("�w�Дԍ��@�p��@���w�@����\n");
	printf("--------------------------\n");

	/*�O���ōs�A�����ŗ��ς��Ȃ���o��*/
	for(row = 0; row < 5; row++){
		for(column = 0; column < 3; column++){
			printf("%d�@�@",score[row][column]);
		}
		printf("%f\n",(score[row][1] + score[row][2]) / 2.0);
		english_average += score[row][1];	//�p��_�����Z
		math_avarage += score[row][2];		//���w�_�����Z
	}

	/*���Ϗo��*/
	printf("--------------------------\n");
	printf("�p��̕���:%f\n",english_average / 5);
	printf("���w�̕���:%f\n",math_avarage / 5);
}