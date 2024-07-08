#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the value of a %d\n",a);
    printf("the value of b %d\n",b);
}
void main()
{
    int a,b;
   printf(" Enter the value of a,b :");
scanf("%d %d",&a,&b);
printf("the value of a before swap %d\n",a);
printf("the value of b before swap %d\n",b);
swap(a,b);
printf("the value of a after swap %d\n",a);
printf("the value of b after swap %d\n",b);
}