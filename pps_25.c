#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int a[n];
    int b[n];
    int c = 0;
    printf("Enter the array elements \n");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int k = n - 1; k >= 0; k--)
    {
        b[k] = a[c];
        c++;
    }
    printf("Reverse order: ");
    for (int j = 0; j <= n - 1; j++)
    {
        printf("%d ", b[j]);
        
    }
    return 0;
}