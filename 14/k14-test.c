#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp_1, *fp_2;
	unsigned char buf_1, buf_2;
	char file_name_1[61], file_name_2[61];
	int n_1, n_2;

	printf("1つ目のファイル名を入力してください(拡張子も含めてください):");
	scanf("%s",file_name_1);
	fp_1 = fopen(file_name_1, "rb");
	if(fp_1 == 0){
		printf("ファイル%sが開けませんでした\n",file_name_1);
		exit(EXIT_FAILURE);
	}

	printf("2つ目のファイル名を入力してください(拡張子も含めてください):");
	scanf("%s",file_name_2);
	fp_2 = fopen(file_name_2, "rb");
	if(fp_2 == 0){
		printf("ファイル%sが開けませんでした\n",file_name_2);
		fclose(fp_1);
		exit(EXIT_FAILURE);
	}

	do{
		n_1 = fread(&buf_1, sizeof(char), 1, fp_1);
		n_2 = fread(&buf_2, sizeof(char), 1, fp_2);

		if((n_1 == 0) && (n_2 == 0)){
			printf("correct!!");
			break;
		}else if(buf_1 != buf_2){
			printf("different files!!");
			break;
		}
	}while(1);
}