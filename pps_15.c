#include <stdio.h>
int main()
{
    int a = 10;
    for (int j = 1; j <= 10; j++)
    {
        for (int i = 1; i <= a; i++)
        {
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}
