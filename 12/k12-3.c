#include <stdio.h>
#include <string.h>

int main(){
	char message[81];
	int counter = 0;

	do{
		printf("文字列:");
		scanf("%s",&message);

		if(strcmp(message, "hello") == 0){
			printf("PC:hello\n");
		//無限ループが使用出来たらこうする
		/*}else if(strcmp(message, "bye") == 0){
			printf("PC:have a nice day!\n");
			break;*/
		}else if(strcmp(message, "count") == 0){
			counter++;
			printf("PC:%d回目のcountです\n",counter);
		}else if(strcmp(message, "bye") != 0){
			printf("PC:%sはわかりません\n",message);
		}
	}while(strcmp(message, "bye") != 0);
	
	printf("PC:have a nice day!\n");
}