#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	int i;
	unsigned char buf[8];

	fp = fopen("akaihane.mid", "rb");
	if(fp == 0){
		printf("�t�@�C��akaihane.mid���J���܂���ł���\n");
		exit(EXIT_FAILURE);
	}

	fread(buf, sizeof(char), 8, fp);

	printf("�擪4�o�C�g:");
	for(i = 0; i < 4; i++){
		printf("%3.2X", buf[i]);
	}
	printf("\n");

	printf("�f�[�^��:");
	for(i = 4; i < 8; i++){
		printf("%3.2X", buf[i]);
	}
	printf("\n");
}