#include <stdio.h>
#include <string.h>

int main(){
	char str[81];
	int appear_num, length, i;

	printf("������:");
	scanf("%s",&str);
	printf("�\�����镶����:");
	scanf("%d",&appear_num);

	length = strlen(str);

	if(appear_num <= length){
		printf("��������%d�������̕�����:",appear_num);
		for(i = 0; i < length; i++){
			if(i >= (length - appear_num)){
				printf("%c",str[i]);
			}
		}
	}else{
		printf("���͂��ꂽ�������%d���������ł�",appear_num);
	}

	printf("\n");
}