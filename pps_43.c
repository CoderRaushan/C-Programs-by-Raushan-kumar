#include<stdio.h>
int add()
{
	int a,b,c,sum;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	c=a+b;
	return c;
}
void main()
{
	int sum;
	sum=add();
	printf("The sum is %d.",sum);
	printf("\nRaushan\n2217063");
}