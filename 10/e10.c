#include <stdio.h>
#include <math.h>

double calcBMI(double, double);
double calcAppWeight(double);

int main(){
	double height, weight;

	printf("身長(m):");
	scanf("%lf",&height);
	printf("体重(kg):");
	scanf("%lf",&weight);

	printf("BMI:%f\n",calcBMI(height, weight));
	printf("適正体重:%f\n",calcAppWeight(height));
}

double calcBMI(double height, double weight){
	double BMI;

	BMI = weight / pow(height, 2);

	return BMI;
}

double calcAppWeight(double height){
	double app_weight;

	app_weight = pow(height, 2) * 22;

	return app_weight;
}