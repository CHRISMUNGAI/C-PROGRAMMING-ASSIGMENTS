//Program to check if number is divisible by 17
#include <stdio.h>

int main()
{
	int number;
	printf("Enter a number\n");
	scanf("%i",&number);
	
	if(number%17 == 0)
	{
		printf("The number is divisible by 17\n");
	}
	else 
	{
		printf("The number is not divisible by 17\n");
	}
	
	return 0;
}
