#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp_read, *fp_write;
	int row, result;
	char str[64];

	row = 1;

	fp_read = fopen("in1.txt", "rt");
	if(fp_read == 0){
		printf("ファイルin1.txtが開けませんでした\n");
		exit(EXIT_FAILURE);
	}

	fp_write = fopen("k13-2.txt", "wt");
	if(fp_write == 0){
		fclose(fp_read);
		printf("ファイルk13-2.txtが開けませんでした\n");
		exit(EXIT_FAILURE);
	}

	do{
		result = fscanf(fp_read, "%s", str);
		if(result == EOF){
			break;
		}

		fprintf(fp_write, "%d:%s\n", row, str);
		row++;
	}while(1);

	fclose(fp_read);
	fclose(fp_write);
}