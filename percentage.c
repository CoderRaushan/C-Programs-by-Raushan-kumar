#include<stdio.h>
int main ()
{   float a;
    printf("Enter your marks:");
    scanf("%f",&a);
    float r=a/100*100;

    float p =r/ 10 + 1;
    printf("your percentage is:%f",p);
return 0;
}