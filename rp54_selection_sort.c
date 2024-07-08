#include <stdio.h>
void selectionsort(int arr[], int s)
{
    int min, i, j, temp;
    for (i = 0; i < s - 1; i++)
    {
        min = i;
        for (j = i + 1; j < s; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
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
    selectionsort(arr, s);
    printf("your sorted array is:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}