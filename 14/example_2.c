#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	double pi;

	fp = fopen("data.dat", "rb");
	if(fp == 0){
		printf("�t�@�C��data.dat���J���܂���ł���\n");
		exit(EXIT_FAILURE);
	}
	fread(&pi, sizeof(double), 1, fp);
	fclose(fp);
	printf("pi = %f", pi);
}