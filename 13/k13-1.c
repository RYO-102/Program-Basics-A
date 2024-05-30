#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	int i, result;
	double num, sum, ave;

	fp = fopen("data.txt","rt");
	if(fp == 0){
		printf("ファイルdata.txtが開けませんでした\n");
		exit(EXIT_FAILURE);
	}

	i = 0;
	sum = 0;
	ave = 0;

	do{
		result = fscanf(fp, "%lf", &num);
		if(result == EOF){
			break;
		}

		i++;
		sum += num;
	}while(1);

	//0除算の防止
	if(i != 0){
		ave = num / i;
	}
	printf("数字の合計:%d個\n",i);
	printf("合計:%f\n",sum);
	printf("平均:%f\n",ave);

	fclose(fp);
}