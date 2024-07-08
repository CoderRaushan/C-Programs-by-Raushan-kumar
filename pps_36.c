#include<stdio.h>
int main(){
	printf("\nRaushan\n2217063\n");
	int beg,mid,end,x;
	int arr[9]={11,22,33,44,55,66,77,88,99};
	printf("Enter element you want to find: ");
	scanf("%d",&x);
	beg=0;
	end=8;
	while (beg<=end)
	{
		mid=(end+beg)/2;
		if (x==arr[mid]){
			printf("Element is found at index %d",mid);
			break;
		}
		else{
			if (x>arr[mid])
				beg=mid+1;
			else
				end=end-1;
		}
	}
	
}