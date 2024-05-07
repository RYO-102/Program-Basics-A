#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	double pi = 3.141592;

	fp = fopen("data.dat","wb");
	if(fp == 0){
		printf("ファイルdata.datが開けませんでした\n");
		exit(EXIT_FAILURE);
	}
	fwrite(&pi, sizeof(double), 1, fp);
	fclose(fp);
}