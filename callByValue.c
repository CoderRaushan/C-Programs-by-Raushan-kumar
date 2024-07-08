// ellustrating call by value
#include <stdio.h>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    // printf("value of a is: %d \n",a);
    // printf("value of b is: %d \n",b);
}
int main(){

    int x, y;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &x, &y);
    printf("value of a before swap is: %d \n", x);
    printf("value of b before swap is: %d \n", y);
    swap(x, y);
    printf("value of a after swap is: %d \n", x);
    printf("value of b after swap is: %d \n", y);

    return 0;
}