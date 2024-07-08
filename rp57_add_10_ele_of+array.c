#include <stdio.h>
int main()
{
    int i, sum = 0,rau[500],c;
    printf("Enter your array elemetnt:\n");
    for (i = 0; i <=9; i++)
    {
        scanf("%d",&rau[i]);
    }
    for (i = 0; i<=9; i++)
    {
        sum= sum + rau[i];
    }    
    printf("the addition of ten arrays element is:%d", sum);
    
    return 0;
    
}