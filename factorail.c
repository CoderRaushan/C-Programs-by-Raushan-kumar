#include<stdio.h>
int fact(int n){
    if(n ==0)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int n,s;
    printf(" Enter the value of factorial :");
    scanf("%d",&n);
    s=fact(n);
    printf("factorial is %d",s);
    return 0;
}