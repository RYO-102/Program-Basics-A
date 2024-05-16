#include <stdio.h>
#include <math.h>

#define E 2.71828

int main(){
	double index, pow_num, exp_num;

	for(index = 0.0; index <= 4.9; index += 0.1){
		pow_num = pow(E,index);
		exp_num = exp(index);

		printf("pow(E,%3.1f) = %9.5f@exp(%3.1f) = %9.5f",index, pow_num, index, exp_num);
		if(exp_num - pow_num >= 0.00001){
			printf("*");
		}
		printf("\n");
	}
}