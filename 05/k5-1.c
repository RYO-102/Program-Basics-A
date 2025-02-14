#include <stdio.h>

int main()
{
	int month;

	printf("¶‚Ü‚ê‚½Œ:");
	scanf("%d",&month);

	switch(month){
		case 1:
		case 2:
		case 12:
			printf("“~‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("t‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("‰Ä‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 9:
		case 10:
		case 11:
			printf("H‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		default:
			printf("”ÍˆÍŠO‚Ì’l‚ª“ü—Í‚³‚ê‚Ä‚¢‚Ü‚·\n");
			break;
	}
}