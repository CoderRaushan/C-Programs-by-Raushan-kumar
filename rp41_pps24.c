#include <stdio.h>
int main()
{
	int n,e=0,o=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements \n");
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		if(i%2==0)
		e=e+a[i];
		else
		o=o+a[i];
	}
	printf("The sum of even indexed elements is %d \n",e);
	printf("The sum of odd indexed elememts is %d",o);
}