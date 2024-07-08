#include <math.h>
#include <stdio.h>
int main()
{
    int a, b, c;
    float root1,root2,D;
    printf("Enter the cooeficient a and b and c:\n");
    scanf("%d %d %d", &a, &b, &c);
    D = b * b - 4 * a * c;
    if(D>0)
    {
        printf("real and unequal roots\n");
        root1=(-b + sqrt(D)) / (2 * a);
        root2= (-b - sqrt(D)) / (2 * a);
        printf("roots are\nroot1=%f\nroot2=%f",root1,root2);
    }

    if (D == 0)
    {
        printf("real and equal roots\n");
        root1 = -b / (2.0 * a);
        printf("root is\nroot1=%f",root1);
    }
        if (D < 0)
    {
        printf("imaginary roots\n");
    }

    return 0;
}