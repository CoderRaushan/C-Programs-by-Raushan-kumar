#include<stdio.h>
int fact(int n);
int main ()
{
int n,s;
printf("Enter the a number:");
scanf("%d",&n);
s=fact(n);
printf("the factorial of giver number is:%d",s);
return 0;
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
{
    fact=fact*i;
}
return fact;
}