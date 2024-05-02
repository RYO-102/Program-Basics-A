#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, distinction, ans_1, ans_2;

	printf("a‚Ì’l:");
	scanf("%lf",&a);
	if(a == 0){
		printf("2Ÿ•û’ö®‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}else{
		printf("b‚Ì’l:");
		scanf("%lf",&b);
		printf("c‚Ì’l:");
		scanf("%lf",&c);
		distinction = pow(b, 2) - (4 * a * c);
		if(distinction > 0){
			printf("À”‰ğ‚ª2ŒÂ‚ ‚è‚Ü‚·\n");
			ans_1 = (-b + sqrt(distinction)) / (2 * a);
			ans_2 = (-b - sqrt(distinction)) / (2 * a);
			printf("À”‰ğ‚Í%f‚Æ%f‚Å‚·\n",ans_1 ,ans_2);
		}else if(distinction == 0){
			printf("À”‰ğ‚ª1ŒÂ‚ ‚è‚Ü‚·\n");
			ans_1 = -b / (2 * a);
			printf("À”‰ğ‚Í%f‚Å‚·\n",ans_1);
		}else{
			printf("À”‰ğ‚Í‚ ‚è‚Ü‚¹‚ñ\n");
		}
	}
}