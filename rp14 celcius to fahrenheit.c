#include<stdio.h>
int main ()
{
	//all the temperatue are in celsius
float celsius;
printf("Enter the temperature in celsius=");
scanf("%f",&celsius);
float f=celsius*9/5+32 ;
printf("the temperature in fahrenheit %g",f);
return 0;
}
