#include<stdio.h>
int main ()
{
    
    int s = 10, c =10;
    for (int i= 1; i<=10; i++)
    {
        for(int j =s; j< 10; j++)
        {
            printf(" ");
        }
        for(int k = 1; k<c; k++)
        {
            printf("*");
        }
        c--;
        s--;
        printf("\n");

    }
    return 0;
}