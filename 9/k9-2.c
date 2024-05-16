#include <stdio.h>

int main(){
	char letter;

	printf("文字を入力\n");
	scanf("%c",&letter);

	if(('A' <= letter) && (letter <= 'Z')){
		printf("%cの小文字は%cです.\n",letter, letter + 32);
	}else if(('a' <= letter) && (letter <= 'z')){
		printf("%cの大文字は%cです.\n",letter, letter - 32);
	}else{
		printf("%cはアルファベットではありません.\n",letter);
	}
}