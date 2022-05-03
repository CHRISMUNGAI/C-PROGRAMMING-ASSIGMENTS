//program to find the volume of a sphere
#include <stdio.h>
#include <math.h>

int main()
{
	float radius,volume;
	printf("Enter the radius of the sphere ");
	scanf("%f",&radius);
	
	volume=4/3*M_PI*radius*radius*radius;
	
	printf("the volume of the sphere is = %f \n",volume);
	return 0;
}
