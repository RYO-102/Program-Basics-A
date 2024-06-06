#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp_read, *fp_write;
	unsigned char buf;
	int n;

	fp_read = fopen("tondo.png","rb");
	if(fp_read == 0){
		printf("ファイルtondo.pngを開けませんでした\n");
		exit(EXIT_FAILURE);
	}

	fp_write = fopen("tondo2.png", "wb");
	if(fp_write == 0){
		printf("ファイルtondo2.pngが開けませんでした\n");
		fclose(fp_read);
		exit(EXIT_FAILURE);
	}

	do{
		n = fread(&buf, sizeof(char), 1, fp_read);
		if(n == 0){
			break;
		}

		fwrite(&buf, sizeof(char), 1, fp_write);
	}while(1);
}