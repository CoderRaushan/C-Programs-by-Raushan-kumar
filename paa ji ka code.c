#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the savings of one month =");
	scanf("%d",&a);
	printf("Enter the number of months =");
	scanf("%d",&b);
	int c=a*b;
	printf("Total saving is=%d",c);
	return 0;
}