#include <stdio.h>

int main(){
	int score[5][3] = {{9972003, 84, 62}, {9972012, 70, 94}, {9972024, 65, 52}, {9972047, 96, 82}, {9972061, 82, 77}};
	int i, j;
	double e_a, m_a;

	e_a = 0;
	m_a = 0;

	printf("�w�Дԍ��@�p��@���w�@����\n");
	printf("--------------------------\n");

	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			printf("%d�@�@",score[i][j]);
		}
		printf("%f\n",(score[i][1] + score[i][2]) / 2.0);
		e_a += score[i][1];
		m_a += score[i][2];
	}
	printf("--------------------------\n");
	printf("�p��̕���:%f\n",e_a / 5);
	printf("���w�̕���:%f\n",m_a / 5);
}