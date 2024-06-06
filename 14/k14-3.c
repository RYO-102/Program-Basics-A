#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *fp_read, *fp_write;
	int n;
	unsigned char buf;
	char file_read_name[61], file_write_name[64];

	printf("ファイル名を入力してください:");
	scanf("%s",file_read_name);

	fp_read = fopen(file_read_name, "rb");
	if(fp_read == 0){
		printf("ファイル%sを開けませんでした\n",file_read_name);
		exit(EXIT_FAILURE);
	}

	strcpy(file_write_name, "OUT");
	strcat(file_write_name, file_read_name);

	fp_write = fopen(file_write_name, "wb");
	if(fp_write == 0){
		printf("ファイル%sを開けませんでした\n",file_write_name);
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