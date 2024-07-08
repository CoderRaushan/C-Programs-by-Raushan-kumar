#include<stdio.h>
int main ()
{
int a,b;
printf("Enter the value of a,b:");
scanf("%d %d",&a,&b);
printf("the value of a before swap:%d\n",a);
printf("the value of b before swap:%d\n",b);
a=a+b;
b=a-b;
a=a-b;
printf("the value of a after swap:%d\n",a);
printf("the value of b after swap:%d\n",b);
return 0;
}