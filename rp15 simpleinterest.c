#include<stdio.h>
int main ()
{
int principle,rate,year ; 
printf("Enter the value of principle=\n");
scanf("%d",&principle);
printf("Enter the value of rate=\n");
scanf("%d",&rate);
printf("Enter the value of year=\n");
scanf("%d",&year);
int s=(principle*rate*year)/100 ;
printf("the simpleinterest is %g",s);
return 0;
}
