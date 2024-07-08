#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main ()
{
int a,b;
printf("Enter the value of a,b :");
scanf("%d %d",&a,&b);
printf("the value of a before sawping %d\n",a);
printf("the value of b before sawping %d\n",b);
swap(&a,&b);
printf("the value of a after sawping %d\n",a);
printf("the value of b after sawping %d\n",b);
}


