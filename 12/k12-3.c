#include <stdio.h>
#include <string.h>

int main(){
	char message[81];
	int counter = 0;

	do{
		printf("������:");
		scanf("%s",&message);

		if(strcmp(message, "hello") == 0){
			printf("PC:hello\n");
		//�������[�v���g�p�o�����炱������
		/*}else if(strcmp(message, "bye") == 0){
			printf("PC:have a nice day!\n");
			break;*/
		}else if(strcmp(message, "count") == 0){
			counter++;
			printf("PC:%d��ڂ�count�ł�\n",counter);
		}else if(strcmp(message, "bye") != 0){
			printf("PC:%s�͂킩��܂���\n",message);
		}
	}while(strcmp(message, "bye") != 0);
	
	printf("PC:have a nice day!\n");
}