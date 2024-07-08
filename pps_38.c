#include<stdio.h>
int main()
{
	int i,j,ind,n,a,temp;
	printf("Enter number of elements in your array: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
	printf("Enter your element: ");
	scanf("%d",&arr[i]);
	}
	for (i=0;i<n-1;i++)
	{
		ind=i;
		for (j=i+1;j<n;j++)
		{
			if (arr[j]<arr[ind])
		    	ind=j;
		}
		temp=arr[i];
		arr[i]=arr[ind];
		arr[ind]=temp;
		for (a=0;a<n;a++)
		{
			printf("%d   ",arr[a]);
		}
		printf("(After phase %d)",i+1);
		printf("\n");
	}
	printf("\nYour sorted array is: \n");
	for (i=0;i<n;i++)
	{
	printf("%d",arr[i]);
	}
	printf("\nRaushan\n2217063");
}