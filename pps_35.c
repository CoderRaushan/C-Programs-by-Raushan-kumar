#include<stdio.h>
int main(){
	int n,i,x,a=0,opt;
	printf("Enter number of elements of your array: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
	printf("Enter your element: ");
	scanf("%d",&arr[i]);
	}
	again:
	printf("Enter element you want to search: ");
	scanf("%d",&x);
	for (i=0;i<n;i++)
	{
		if (arr[i]==x){
			printf("Element is found at index %d.",i);
			break;
		}
		else
		    a=a+1;
	}
	if (a==n)
	    printf("Element not found.");
	printf("\nDo you want to search for another element?\n(1)Yes\n(2)No\n");
	scanf("%d",&opt);
	switch(opt){
		case 1:
		     goto again;
		     break;
		case 2:
		     printf("Thanks");
		     printf("\nRaushan\n2217063");
	}
	
	}