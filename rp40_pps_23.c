#include <stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements \n");
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("Sum of array elements is %d",s);
}