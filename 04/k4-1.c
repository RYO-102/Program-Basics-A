#include <stdio.h>

int main()
{
	/*•Ï”éŒ¾*/
	int year;

	/*’l‚Ì“ü—Í*/
	printf("¶‚Ü‚ê‚½”N(¼—ï):");
	scanf("%d",&year);

	/*”»’è•”*/
	if(year <= 1988){
		printf("º˜aˆÈ‘O‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
	}else if(year == 1989){
		printf("º˜a‚©•½¬‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
	}else if((1990 <= year) && (year <= 2018)){
		printf("•½¬‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
	}else if(year == 2019){
		printf("•½¬‚©—ß˜a‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
	}else if((2020 <= year) && (year <= 2024)){
		printf("—ß˜a‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
	}else{
		printf("‚Ü‚¾¶‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñ\n");
	}
}