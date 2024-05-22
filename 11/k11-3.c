#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
	double weight;
	int price;
}meat;

meat make_pack(void);

int main(){
	meat meats[10];
	int i;
	double ave_weight = 0.0;
	double ave_price = 0.0;

	srand((unsigned)time(NULL));

	for(i = 0; i < 10; i++){
		meats[i] = make_pack();
		ave_weight += meats[i].weight;
		ave_price += (double)meats[i].price;
	}

	ave_weight /= 10.0;
	ave_price /= 10.0;

	printf("　重さ　　値段\n");
	printf("-----------------------\n");

	for(i = 0; i < 10; i++){
		printf("%5.1fg　%d円",meats[i].weight, meats[i].price);

		if(meats[i].price >= ave_price){
			printf("*");
		}
		printf("\n");
	}

	printf("-----------------------\n");
	printf("重さの平均:%6.2fg\n",ave_weight);
	printf("値段の平均:%6.2f円\n",ave_price);
}

meat make_pack(void){
	meat decide_input;

	decide_input.weight = (rand() % 1001 + 2500) / 10.0;
	decide_input.price = (int)(decide_input.weight * 1.28);

	return decide_input;
}