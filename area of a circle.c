//area of a circle <stdio.h>
#include <stdio.h>
int main()
{
	float radius;
	float area;
	printf("enter radius of the circle\n");
	scanf("%f",&radius);
	area = 3.142 * radius * radius;
	printf("area=%f\n",area);
	return 0;
}
