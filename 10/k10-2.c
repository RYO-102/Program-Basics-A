#include <stdio.h>

int calc_normal_fee(double vertical_cm, double side_cm, double depth_cm, double weight_kg){
	int price;
	double total_length;

	total_length = vertical_cm + side_cm + depth_cm;

	if((total_length <= 100) && (weight_kg <= 2)){
		price = 864;
	}else if((total_length <= 180) && (weight_kg <= 15)){
		price = 1620;
	}else{
		price = -1;
	}

	return price;
}

int main(){
	double vertical_cm, side_cm, depth_cm, weight_kg;
	int express,price;

	printf("c‚Ì’·‚³(cm):");
	scanf("%lf",&vertical_cm);
	printf("‰¡‚Ì’·‚³(cm):");
	scanf("%lf",&side_cm);
	printf("‰œs‚«(cm):");
	scanf("%lf",&depth_cm);
	printf("d‚³(kg):");
	scanf("%lf",&weight_kg);
	printf("‚¨‹}‚¬•Ö(1) or ’Êí•Ö(0):");
	scanf("%d",&express);

	price = calc_normal_fee(vertical_cm, side_cm, depth_cm, weight_kg);

	if(price == -1){
		printf("ðŒ‚É‡‚¢‚Ü‚¹‚ñ\n");
	}else{
		printf("—¿‹à‚Í%d‰~‚Å‚·\n",price + express * 540);
	}
}