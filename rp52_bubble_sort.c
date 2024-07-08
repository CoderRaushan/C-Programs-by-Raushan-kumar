#include <stdio.h>
void bubblesort(int arr[], int s)
{
    int i, temp, swaped, p;
    for (p = 0; p <= s - 1; p++)
    {
        printf("how many times passed %d\n", p + 1);
        swaped = 0;

        for (i = 0; i < s - 1 - p; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                swaped = 1;
            }
        }
        if (swaped == 0)
        {
            break;
        }
    }
}
int main()
{
    int s, arr[100], i;
    printf("Enter the size of your array element:");
    scanf("%d", &s);
    printf("Enter  your array elements:\n");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, s);
    printf("your sorted array element is:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}