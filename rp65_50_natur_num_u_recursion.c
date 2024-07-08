#include <stdio.h>
int add(int n)
{
    int d;
    if (n <=49)
    { 
     printf("%d\n",n);
     add(n + 1);

    }
}
int main()
{
    int n=1, s;
    s = add(n);
     printf("%d\n", s); 
    return 0;
}