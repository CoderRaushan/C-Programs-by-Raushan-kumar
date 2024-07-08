#include<stdio.h>
int main ()
{
int i;
char a[25];
printf("Enter your string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++);
printf("length of your string is:%d",i);
return 0;
}