#include <stdio.h>
#include <string.h>

int main(){
	char str[81];
	int appear_num, length, i;

	printf("文字列:");
	scanf("%s",&str);
	printf("表示する文字列:");
	scanf("%d",&appear_num);

	length = strlen(str);

	if(appear_num <= length){
		printf("末尾から%d文字分の文字列:",appear_num);
		for(i = 0; i < length; i++){
			if(i >= (length - appear_num)){
				printf("%c",str[i]);
			}
		}
	}else{
		printf("入力された文字列は%d文字未満です",appear_num);
	}

	printf("\n");
}