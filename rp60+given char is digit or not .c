#include<stdio.h>
int main ()
{
char e;
printf("Enter a charecter:");
scanf("%c",&e);
if(e>='0' && e<='9')
{
    printf("%c is a digit",e);
}                                                 
else
{
  printf("%c is a charecter",e);
}
return 0;
}