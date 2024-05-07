#include <stdio.h>
#include <string.h>

int main(){
	char str[81];
	int length;
	int start, num_char;
	int i;

	printf("文字列:");
	scanf("%s",&str);

	length = strlen(str);

	printf("置換開始位置:");
	scanf("%d",&start);
	printf("置換文字数:");
	scanf("%d",&num_char);

	if(start > length){
		printf("入力された文字列は%d文字未満です\n",start);
	}else if((start + num_char - 1) > length){
		printf("%d文字目から%d文字分を置換することができません\n",start, num_char);
	}else{
		for(i = start - 1; i < (start + num_char - 1); i++){
			str[i] = '*';
		}
		printf("置換後の文字列:%s\n",str);
	}
}