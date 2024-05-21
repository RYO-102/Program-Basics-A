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

	printf("�c�̒���(cm):");
	scanf("%lf",&vertical_cm);
	printf("���̒���(cm):");
	scanf("%lf",&side_cm);
	printf("���s��(cm):");
	scanf("%lf",&depth_cm);
	printf("�d��(kg):");
	scanf("%lf",&weight_kg);
	printf("���}����(1) or �ʏ��(0):");
	scanf("%d",&express);

	price = calc_normal_fee(vertical_cm, side_cm, depth_cm, weight_kg);

	if(price == -1){
		printf("�����ɍ����܂���\n");
	}else{
		printf("������%d�~�ł�\n",price + express * 540);
	}
}