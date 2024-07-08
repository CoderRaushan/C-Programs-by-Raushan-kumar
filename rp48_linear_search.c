#include <stdio.h>
int main()
{
    int arr[100], size, i, element;
    printf("Enter your size of array:");
    scanf("%d",&size);
    printf("Enter your array element:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter an array element to be search:");
    scanf("%d",&element);
    for (i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            printf("Element is found at index:%d", i);
            break;
        }
    }
    if (i == size)
    {
        printf("Element is not present in the array");
    }
    return 0;
}