#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int r, ans;

	srand((unsigned)time(NULL));
	r = rand() % 6 + 1;

	do{
		printf("1�`6�̐�:");
		scanf("%d",&ans);
		if(ans > r){
			printf("�����Ə��������ł�\n");
		}else if(ans < r){
			printf("�����Ƒ傫�����ł�\n");
		}
	}while(ans != r);
	printf("�����ł�\n");
}