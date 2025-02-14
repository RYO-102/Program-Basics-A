#include <stdio.h>

int main()
{
	/*変数宣言*/
	int interest, grade;

	/*数値の入力*/
	printf("興味のある分野(環境:1, 情報:2, データ科学:3):");
	scanf("%d",&interest);
	printf("学年(1～9):");
	scanf("%d",&grade);

	/*判定部*/
	if((1 <= grade) && (grade <= 4)){
		/*ここから学部生の処理*/
		if(interest == 1){
			printf("環境学部\n");
		}else if(interest == 2){
			printf("メディア情報学部\n");
		}else if(interest == 3){
			printf("デザイン・データ科学部\n");
		}else{
			printf("範囲外の値が入力されています\n");
		}
	}else if((5 <= grade) && (grade <= 9)){
		/*ここから大学院生の処理*/
		if((1 <= interest) && (interest <= 3)){
			printf("環境情報研究科\n");
		}else{
			printf("範囲外の値が入力されています\n");
		}
	}else{
		/*学年範囲外のエラー処理*/
		printf("範囲外の値が入力されています\n");
	}
}