#include <stdio.h>
int main()
{
	int n,min,temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	int b[n];
	printf("Enter the array elements \n");
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<=n-1;j++)
	{
		min=a[j];
		for(int k=j;k<=n-2;k++)
		{
			if(a[k+1]<min)
			{
				temp=min;
				min=a[k+1];
				a[k+1]=temp;
			}
		}
		b[j]=min;
	}
printf("Second smallest element is %d \n",b[1]);
printf("Second largest element is %d",b[n-2]);
}