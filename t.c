#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j,k,d=0;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("the value of first matrix:a%d%d=", i, j);
            scanf("%d",&a[i][j]);
        }
        
    }
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("the value of second matrix:b%d%d=", i, j);
            scanf("%d",&b[i][j]);
        }
    }
    for (i = 1; i <= 3; i++)
    
        for (j = 1; j <= 3; j++)
        {
           for(k=1;k<=3;k++)
           
            d=d+a[i][k]*b[k][j];
           
           
            c[i][j]=d;
        }
     
    
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d\t", c[i][j]);
           
        }
         printf("\n");
    }
    return 0;
}