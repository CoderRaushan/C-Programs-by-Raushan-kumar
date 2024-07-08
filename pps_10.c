#include<stdio.h>
int main (){
int n1,n2,n3;
printf("Enter three numbers:");
scanf("%d %d %d",&n1,&n2,&n3);
if(n1>n2 && n1>n3)
printf("n1 is gretest number");
else if (n2>n1 && n2>n3)
printf("n2 is gretest number");
else
printf("n3 is greatest numbers");
return 0;
}
