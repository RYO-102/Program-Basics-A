#include <stdio.h>

int main(){
	/*変数宣言・配列初期化*/
	int score[5][3] = {{9972003, 84, 62}, {9972012, 70, 94}, {9972024, 65, 52}, {9972047, 96, 82}, {9972061, 82, 77}};
	int row, column;
	double english_average, math_avarage;

	/*0代入*/
	english_average = 0;
	math_avarage = 0;

	/*結果出力*/
	printf("学籍番号　英語　数学　平均\n");
	printf("--------------------------\n");

	/*外側で行、内側で列を変えながら出力*/
	for(row = 0; row < 5; row++){
		for(column = 0; column < 3; column++){
			printf("%d　　",score[row][column]);
		}
		printf("%f\n",(score[row][1] + score[row][2]) / 2.0);
		english_average += score[row][1];	//英語点数加算
		math_avarage += score[row][2];		//数学点数加算
	}

	/*平均出力*/
	printf("--------------------------\n");
	printf("英語の平均:%f\n",english_average / 5);
	printf("数学の平均:%f\n",math_avarage / 5);
}