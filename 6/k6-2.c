#include <stdio.h>

int main()
{
	/*•Ï”éŒ¾*/
	int balance, price;

	/*cŠz‚Ì“ü—Í*/
	printf("cŠz:");
	scanf("%d",&balance);

	/*cŠz‚ª1000‚æ‚è‘å‚«‚¢‚Æ‚«Œp‘±*/
	while(1000 <= balance){

		/*x•¥‹àŠz‚Ì“ü—Í*/
		printf("x•¥‹àŠz:");
		scanf("%d",&price);

		/*x•¥‹àŠz‚ªcŠz‚ğã‰ñ‚Á‚Ä‚¢‚é‚©”»’è*/
		if(balance < price){
			printf("cŠz‚ª‘«‚è‚Ü‚¹‚ñ!\n");
		}else{
			balance -= price;
			printf("cŠz‚Í%d‰~‚Å‚·\n",balance);
		}
	}
	/*I—¹ƒƒbƒZ*/
	printf("ƒ`ƒƒ[ƒW‚µ‚Ä‚­‚¾‚³‚¢\n");
}