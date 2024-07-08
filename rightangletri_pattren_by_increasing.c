#include <stdio.h>
int main()
{
    int i,no=0,j;
    for (i = 1; i <=4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            
            no++;
            printf("%d ",no);
        }
        printf("\n");
    }
    return 0;
}