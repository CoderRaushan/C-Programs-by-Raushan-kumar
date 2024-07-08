#include <stdio.h>
int main()
{
	printf("Dilvir Singh 2217021 \n");
	int n,s=0;
	printf("How many numbers are going to be entered: ");
	scanf("%d",&n);
	printf("Enter the positive numbers:\n");
	for(int i=1;i<=n;i++)
	{
		int num;
		scanf("%d",&num);
		if(num>=0)
		s=s+num;
	}
	printf("The average of positive %d numbers is %d",n,s/n);
}