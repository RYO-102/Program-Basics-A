#include <stdio.h>
#include <string.h>

int main(){
	char str[81];
	int i;

	printf("������:");
	scanf("%s",&str);

	for(i = 0; i < (int)strlen(str); i++){
		if((('A' <= str[i]) && (str[i] <= 'Y')) || (('a' <= str[i]) && (str[i] <= 'y'))){
			str[i] += 1;
		}else if((str[i] == 'Z') || (str[i] == 'z')){
			str[i] -= ('Z' - 'A');
		}
	}

	printf("�u����̕�����:%s",str);
}