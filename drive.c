#include<stdio.h>
int main ()
{
int age;
printf("enter your age:");
scanf("%d",&age);
if(age>=18 && age <=40)
{
   printf("you can drive"); 
}
else if(age<18 && age>40) 
{
    printf("you can not drive");
}
// else {
//    printf("you can not drive"); 
// }
return 0;
}