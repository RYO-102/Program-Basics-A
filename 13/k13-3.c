#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp_read1, *fp_read2, *fp_write;
	char str[64];
	int result;

	fp_read1 = fopen("in1.txt", "rt");
	if(fp_read1 == 0){
		printf("�t�@�C��in1.txt���J���܂���ł���\n");
		exit(EXIT_FAILURE);
	}
	fp_read2 = fopen("in2.txt", "rt");
	if(fp_read2 == 0){
		fclose(fp_read1);
		printf("�t�@�C��in2.txt���J���܂���ł���\n");
		exit(EXIT_FAILURE);
	}
	fp_write = fopen("out.txt", "wt");
	if(fp_write == 0){
		fclose(fp_read1);
		fclose(fp_read2);
		printf("�t�@�C��out.txt���J���܂���ł���\n");
		exit(EXIT_FAILURE);
	}

	do{
		result = fscanf(fp_read1, "%s", str);
		if(result == EOF){
			break;	//�l�X�g���[���Ȃ�̂�break
		}

		fprintf(fp_write, "%s\n", str);
	}while(1);

	do{
		result = fscanf(fp_read2, "%s", str);
		if(result == EOF){
			break;
		}

		fprintf(fp_write, "%s\n", str);
	}while(1);

	fclose(fp_read1);
	fclose(fp_read2);
	fclose(fp_write);
}