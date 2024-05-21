#include <stdio.h>

int is_leap_year(int year);
void print_days_of_year(int year);

int main(){
	int year;

	printf("¼—ï”N:");
	scanf("%d",&year);

	print_days_of_year(year);
	print_days_of_year(year - 1);
	print_days_of_year(year + 1);
}

int is_leap_year(int year){
	int decision;

	if((year % 100 == 0) && (year % 400 != 0)){
		decision = 0;
	}else if(year % 4 == 0){
		decision = 1;
	}else{
		decision = 0;
	}

	return decision;
}

void print_days_of_year(int year){
	int decision;

	decision = is_leap_year(year);

	printf("%d”N‚Ì“ú”‚Í%d“ú‚Å‚·\n",year, 365 + decision);
}