#include <stdio.h>

int main()
{
	/*•Ï”éŒ¾*/
	int balance, price;

	/*‰Šú‰»*/
	balance = 10000;

	/*cŠz‚ª0‚æ‚è‘å‚«‚¢‚È‚çŒp‘±*/
	while(0 < balance){
		/*cŠz‚ÌŠm”F‚Æx•¥‹àŠz‚Ì“ü—Í*/
		printf("cŠz‚Í%d‰~‚Å‚·\n",balance);
		printf("x•¥‹àŠz:");
		scanf("%d",&price);

		/*x•¥‹àŠz‚ªcŠz‚ğã‰ñ‚Á‚Ä‚¢‚é‚©”»’è*/
		if(balance < price){
			printf("cŠz‚ª‘«‚è‚Ü‚¹‚ñ!\n");
		}else{
			/*cŠz‚©‚çx•¥‹àŠz‚ğˆø‚­*/
			balance -= price;
		}
	}
	/*I—¹ƒƒbƒZ*/
	printf("cŠz‚ª0‰~‚É‚È‚è‚Ü‚µ‚½\n");
	printf("I—¹‚µ‚Ü‚·\n");
}