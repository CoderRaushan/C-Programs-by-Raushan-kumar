#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter any positive number:");
    int n;
    scanf("%d", &n);
    if (n >= 0)
    {
        float s = sqrt(n);
        printf("The square root of given number is %f", s);
    }
    else
        printf("The number should be only positive");
    return 0;
}
