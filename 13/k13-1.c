#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	int i, result;
	double num, sum, ave;

	fp = fopen("data.txt","rt");
	if(fp == 0){
		printf("�t�@�C��data.txt���J���܂���ł���\n");
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

	//0���Z�̖h�~
	if(i != 0){
		ave = num / i;
	}
	printf("�����̍��v:%d��\n",i);
	printf("���v:%f\n",sum);
	printf("����:%f\n",ave);

	fclose(fp);
}