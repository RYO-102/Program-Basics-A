#include <stdio.h>

int main(){
	int i;
	char letter;

	for(i = 33; i <= 125; i++){
		letter = i;
		printf("%3d = %c\n",i, letter);
	}
}