#include <stdio.h>
#include <string.h>

int main(){
	char str[81];
	int length;
	int start, num_char;
	int i;

	printf("������:");
	scanf("%s",&str);

	length = strlen(str);

	printf("�u���J�n�ʒu:");
	scanf("%d",&start);
	printf("�u��������:");
	scanf("%d",&num_char);

	if(start > length){
		printf("���͂��ꂽ�������%d���������ł�\n",start);
	}else if((start + num_char - 1) > length){
		printf("%d�����ڂ���%d��������u�����邱�Ƃ��ł��܂���\n",start, num_char);
	}else{
		for(i = start - 1; i < (start + num_char - 1); i++){
			str[i] = '*';
		}
		printf("�u����̕�����:%s\n",str);
	}
}