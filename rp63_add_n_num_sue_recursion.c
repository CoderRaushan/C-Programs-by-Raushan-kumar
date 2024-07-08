#include <stdio.h>
int add(int n)
{
    int d;
    if (n <=1)
    {
        return n;
    }

    else
    {
       d= n + add(n - 1);
        return d;
    }
}
int main()
{
    int n, s;
    printf("Enter a number:");
    scanf("%d", &n);
    s = add(n);
    printf("Sum of n numbers is:%d", s);
    return 0;
}