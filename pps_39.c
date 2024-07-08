#include<stdio.h>
int main()
{
	int i,j,n,key;
	printf("Enter number of elements in your array: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf("Enter your element: ");
		scanf("%d",&arr[i]);
	}
	for (i=1;i<=n-1;i++){
		key=arr[i];
		j=i-1;
		while (j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	for (i=0;i<n;i++){
		printf("%d   ",arr[i]);
	}
	printf("\nRaushan\n22117063");
}