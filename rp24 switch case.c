#include<stdio.h>
int main()
{
int age ;
printf("Enter your age= ");
scanf("%d",&age);
switch(age)
{
case 65: 
printf("your age is 65");
break;
case 78:
printf("your age is 78");
break;
case 57:
printf("your age is 57");
break;
default:
printf("age is not 65,78,57");
}
return 0;
}




