#include <stdio.h>
int main()
{
	int n,l,n1=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n>0)
	{
		l=n%10;
		n1=n1*10+l;
		n=n/10;
	}
	printf("The reverse of the given number is: %d",n1);
}