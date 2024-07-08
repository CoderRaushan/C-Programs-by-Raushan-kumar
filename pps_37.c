#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter number of elements in your array: ");
	scanf("%d",&n);
	int arr[n];
	for (i = 0; i < n; i++)
    {
        printf("Enter array element: ");
        scanf("%d",&arr[i]);
    }
    int temp;
    for (i = 0; i < n-1; i++) 
    { 
        for (int j = 0; j <n-1-i ; j++) 
        {
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }  
    } 
    printf("\nYour sorted array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n\nRaushan\n2217063");
}