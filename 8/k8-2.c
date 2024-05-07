#include <stdio.h>

int main(){
	int score[5][2];
	int i, number;

	for(i = 0; i < 5; i++){
		printf("%d人目の学生の学籍番号:",i + 1);
		scanf("%d",&score[i][0]);
		printf("%d人目の学生の英語の点数:",i + 1);
		scanf("%d",&score[i][1]);
	}
	printf("以下の学生の英語の点数を表示できます\n");
	for(i = 1; i <= 5; i++){
		printf("%d:%d\n",i, score[i - 1][0]);
	}
	printf("表示したい学生の番号（1～5）:");
	scanf("%d",&number);
	printf("学籍番号%dの学生の英語の点数は%dです\n",score[number - 1][0], score[number - 1][1]);
}