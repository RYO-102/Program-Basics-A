#include <stdio.h>

int main(){
	char letter;

	printf("���������\n");
	scanf("%c",&letter);

	if(('A' <= letter) && (letter <= 'Z')){
		printf("%c�̏�������%c�ł�.\n",letter, letter + 32);
	}else if(('a' <= letter) && (letter <= 'z')){
		printf("%c�̑啶����%c�ł�.\n",letter, letter - 32);
	}else{
		printf("%c�̓A���t�@�x�b�g�ł͂���܂���.\n",letter);
	}
}