#include <stdio.h>
#include <string.h>

int main(){
	char str[81];
	int appear_num, length, i;

	printf("•¶Žš—ñ:");
	scanf("%s",&str);
	printf("•\Ž¦‚·‚é•¶Žš—ñ:");
	scanf("%d",&appear_num);

	length = strlen(str);

	if(appear_num <= length){
		printf("––”ö‚©‚ç%d•¶Žš•ª‚Ì•¶Žš—ñ:",appear_num);
		for(i = 0; i < length; i++){
			if(i >= (length - appear_num)){
				printf("%c",str[i]);
			}
		}
	}else{
		printf("“ü—Í‚³‚ê‚½•¶Žš—ñ‚Í%d•¶Žš–¢–ž‚Å‚·",appear_num);
	}

	printf("\n");
}