#include <stdio.h>

int main(){
	int score[5][2];
	int i, number;

	for(i = 0; i < 5; i++){
		printf("%d�l�ڂ̊w���̊w�Дԍ�:",i + 1);
		scanf("%d",&score[i][0]);
		printf("%d�l�ڂ̊w���̉p��̓_��:",i + 1);
		scanf("%d",&score[i][1]);
	}
	printf("�ȉ��̊w���̉p��̓_����\���ł��܂�\n");
	for(i = 1; i <= 5; i++){
		printf("%d:%d\n",i, score[i - 1][0]);
	}
	printf("�\���������w���̔ԍ��i1�`5�j:");
	scanf("%d",&number);
	printf("�w�Дԍ�%d�̊w���̉p��̓_����%d�ł�\n",score[number - 1][0], score[number - 1][1]);
}