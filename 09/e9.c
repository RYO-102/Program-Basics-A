#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main()
{
	int angle;
	double sine;

	for(angle = -15; angle <= 15; angle++){
		sine = sin(angle * PI / 180);
		printf("sin(%3d):%7.3f\n",angle, sine);
	}
}