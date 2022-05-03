//program to demonstrate yse of arithmetic operators
#include <stdio.h>
int main()
{
	int a,b;
	int addition,subtraction,modulus;
	float division;
	printf("Enter the value of the first number ");
	scanf("%d",&a);
	printf("Enter the value of the second number ");
	scanf("%d",&b);
	addition = a+b;
	subtraction = a-b;
	division = (float)a /(float) b;
	modulus = a%b;
	printf("addition of the two numbers a, b is : %d\n",addition);
	printf("subtraction of the two numbers a, b : %d\n",subtraction);
	printf("division of two the numbers a, b : %f\n",division);
	printf("modulus of two the numbers a, b : %d\n",modulus);
	
	return 0;
}
