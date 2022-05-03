//A grading system program
#include <stdio.h>

int main()
{
	float mathematics,english,kiswahili,science,socialstudies;
	float total,average;
	
	printf("enter marks for Mathematics \n");
	scanf("%f",&mathematics);
	  
	printf("enter marks for English \n");
	scanf("%f",&english);
	  
	printf("enter marks for Kiswahili \n");
	scanf("%f",&kiswahili);
	  
	printf("enter marks for Socialstudies \n");
	scanf("%f",&socialstudies);
	  
	printf("enter marks for Science \n");
	scanf("%f",&science);
	
	total= mathematics+english+kiswahili+science+socialstudies;
	
	average=total/5;
	
	printf("average = %f \n",average);
	
	
	if(average>= 70 && average<=100)
	{
	printf(" A\n");
	}
	
	else if(average>=60 && average<=69)
	{
	printf(" B\n");
	}
	
	else if(average>=40 && average<=59)
	{
	printf(" C\n");
	}
	
	else if(average>=0 && average<=39)
	{
	printf(" D\n");
	}

	else
	{
		printf(" Fail");
	}
	

	return 0;
}
