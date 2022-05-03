//A c program to show weather in different ranges of temperature
#include<stdio.h>
#include <conio.h>
int main()
{
float temperature;
printf("enter the temperature.\n");
scanf("%f",&temperature);
if (temperature<0)
{
printf(" freezing weather.\n");
}
else if (temperature>=0 && temperature<=10)
{
printf(" very cold weather.\n");
}
else if(temperature>=10 && temperature<=20)
{
printf("cold weather.\n");
}
else if(temperature>=20 && temperature<=30)
{
printf("normal in weather.\n");
}
else if(temperature>=30 && temperature<=40)
{
printf("it is hot.\n");
}
else
  {
    printf(" too hot weather.\n");
}
getch();
return 0;
}
