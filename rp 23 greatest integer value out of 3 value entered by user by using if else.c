#include<stdio.h>
int main ()
{
    int a,b,c;
printf("Enter a number ");
scanf("%d %d %d " , &a,&b,&c);
if (a>=b  && a>=c)
printf("%d is the largest numbr",a);
elseif(b>=a && b>=c)
printf("%d is the largest numbr",b);
else
printf("%d is the largest numbr",c);
    return 0;
}