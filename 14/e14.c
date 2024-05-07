#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	unsigned char buf[8];
	int i;

	fp = fopen("tondo.png", "rb");
	if(fp == 0){
		printf("ファイルtondo.pngは開けませんでした\n");
		exit(EXIT_FAILURE);
	}

	fread(&buf, sizeof(char), 8, fp);
	fclose(fp);

	for(i = 0; i < 8; i++){
		printf("%3.2X",buf[i]);
	}
	printf("\n");
}