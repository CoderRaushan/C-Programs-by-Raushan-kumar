#include <stdio.h>
void insertion_sort(int arr[], int s)
{
    int i, j,temp;
    for (i = 1; i < s ; i++)
    {
        temp=arr[i];    
        j=i-1;
        while(j>=0 && arr[j]>temp) 
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int s, arr[200], i;
    printf("Enter your array size:");
    scanf("%d", &s);
    printf("Enter your array elements:\n");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, s);
    printf("your sorted array is:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}