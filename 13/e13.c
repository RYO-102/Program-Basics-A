#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	int num_1, num_2;

	fp = fopen("result99.txt","w");
	if(fp == 0){
		printf("ファイルresult99.txtが開けませんでした\n");
		exit(EXIT_FAILURE);
	}

	for(num_1 = 1; num_1 <= 9; num_1++){
		for(num_2 = 1; num_2 <= 9; num_2++){
			fprintf(fp, "%d * %d = %2d\n", num_1, num_2, num_1 * num_2);
		}
		fprintf(fp, "\n");
	}

	fclose(fp);
}