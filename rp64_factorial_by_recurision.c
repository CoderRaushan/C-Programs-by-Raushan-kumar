#include <stdio.h>
int fact(int n)
{
    int d;
    if (n == 0)
    {
        return 1;
    }

    else
    {
        d= n * fact(n - 1);
        return d;
    }
}
int main()
{
    int n, s;
    printf("Enter  a number:");
    scanf("%d", &n);
    s = fact(n);
    printf("the factorial of giver number is:%d", s);
    return 0;
}