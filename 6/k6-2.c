#include <stdio.h>

int main()
{
	int b,p;

	printf("écäz:");
	scanf("%d",&b);
	while(1000 <= b){
		printf("éxï•ã‡äz:");
		scanf("%d",&p);
		if(b < p){
			printf("écäzÇ™ë´ÇËÇ‹ÇπÇÒ!\n");
		}else{
			b -= p;
			printf("écäzÇÕ%dâ~Ç≈Ç∑\n",b);
		}
	}
	printf("É`ÉÉÅ[ÉWÇµÇƒÇ≠ÇæÇ≥Ç¢\n");
}