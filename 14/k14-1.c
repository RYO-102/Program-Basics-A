#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	int i;
	unsigned char buf[8];

	fp = fopen("akaihane.mid", "rb");
	if(fp == 0){
		printf("ファイルakaihane.midが開けませんでした\n");
		exit(EXIT_FAILURE);
	}

	fread(buf, sizeof(char), 8, fp);

	printf("先頭4バイト:");
	for(i = 0; i < 4; i++){
		printf("%3.2X", buf[i]);
	}
	printf("\n");

	printf("データ長:");
	for(i = 4; i < 8; i++){
		printf("%3.2X", buf[i]);
	}
	printf("\n");
}