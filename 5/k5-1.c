#include <stdio.h>

int main()
{
	int month;

	printf("¶‚Ü‚ê‚½Œ:");
	scanf("%d",&month);

	switch(month){
		case 1:
			printf("“~‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 2:
			printf("“~‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 3:
			printf("t‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 4:
			printf("t‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 5:
			printf("t‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 6:
			printf("‰Ä‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 7:
			printf("‰Ä‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 8:
			printf("‰Ä‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 9:
			printf("H‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 10:
			printf("H‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 11:
			printf("H‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		case 12:
			printf("“~‚É¶‚Ü‚ê‚Ü‚µ‚½\n");
			break;
		default:
			printf("”ÍˆÍŠO‚Ì’l‚ª“ü—Í‚³‚ê‚Ä‚¢‚Ü‚·\n");
			break;
	}
}