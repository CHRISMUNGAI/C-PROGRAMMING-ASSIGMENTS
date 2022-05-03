//program to check if year is leap or not
#include <stdio.h>
int main()
 {
 	int year;
 	int month;
 	printf("Enter the year\n");
 	scanf("%d",&year);
 	
 	if (year%4==0 )
 	{
 		printf("The year is a leap year\n");
	 }
	 else
	  {
	 printf("The year is not a leap year\n");	
	 }
	return 0;
}
