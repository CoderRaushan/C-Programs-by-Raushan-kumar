// ellustrating call by reference.

#include<stdio.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("value of a before swap is: %d \n", a);
    printf("value of b before swap is: %d \n", b);
    swap(&a, &b);
    printf("value of a after swap is: %d \n", a);
    printf("value of b after swap is: %d \n", b);

    return 0;
}