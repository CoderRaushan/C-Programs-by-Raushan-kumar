#include<stdio.h>
int add(int,int);
int mul(int,int);
int c;
int add(int a,int b)
{
c=a+b;
return(c);
}
int mul(int a,int b)
{
    c=(a*b);
    return(c);
}
int main()
{
int a,b,s,p;
printf("enter the value of a,b:");
scanf("%d %d",&a,&b);
s=add(a,b);
p=mul(a,b);
printf("the sum is:%d\n",s);
printf("the multiplication is:%d\n",p);
return 0;
}
