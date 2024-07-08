#include <stdio.h>
int main()
{
	int l,b,r,c=0;
	float w=0;
	printf("Enter the length and breadth \n");
	scanf("%d",&l);
	scanf("%d",&b);
	printf("Enter the radius of circle \n");
	scanf("%d",&r);
	if(r<=l && r<=b)
	{
		c=(l*b)/(3.14*r*r);
		w=(l*b)-(c*(3.14*r*r));
	}
	else
	printf("Enter the correct radius. No circle possible \n");
	printf("The circle possible are %d \n",c);
	printf("The waste area is: %f",w);
	}