#include<stdio.h>
int main()
{
    char name[1000];
    int i;
 
    printf("Enter your full name: ");
    scanf("%s", name);
 
    for (i = 0; name[i] != '\0'; ++i);
 
    printf("Length of your full name is %d", i);
 
    return 0;
}