#include <stdio.h>

int main(){
	/*変数宣言*/
	int num[4];
	int i;

	/*入力部*/
	for (i = 0; i < 4; i++){
		printf("%d個目の整数:",i + 1);
		scanf("%d",&num[i]);
	}

	/*結果出力*/
	printf("結果\n");
	for (i = 3; i >= 0; i--){
		printf("%d\n",num[i]);
	}
}