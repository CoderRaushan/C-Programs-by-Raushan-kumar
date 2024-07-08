#include<stdio.h>
int main ()
{   
    int days,ours ;
    printf("Enter your ours=");
    scanf("%d",&ours);
    days=ours/24 ;
    ours=ours%24 ;
    printf("number of days and ours is %d days %d ours",days,ours);
    return 0 ;

}
