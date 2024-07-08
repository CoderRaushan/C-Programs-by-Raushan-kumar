#include<stdio.h>
void add(int *a,int *b)
{
    int c;
    c=*a+*b;
    printf("Addition of two number is %d",c);

}
int main (){
int a,b;
a=58,b=55;
add(&a,&b);
return 0;
}