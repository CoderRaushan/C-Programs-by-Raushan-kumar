#include<stdio.h>
void binarysearch(int a[],int s,int ele)
{
    int i=0,f=s-1,m;
    while(i<=f)
    {
        m=(i+f)/2;
        if(ele==a[m])
        {
            printf("Element is found at index :%d\n",m);
            break;
        }
        else if(ele>a[m])
        {
            i=m+1;
        }
        else if(ele<a[m])
        {
              f=m-1;
        }
        else
        {
            printf("element is not present");
        }
    }
    
}
int main ()
{    int ele,a[1000],s,i;
     printf("Enter your size of array:");
    scanf("%d",&s);
    printf("Enter your array element:\n");
    for (i = 0; i < s; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter an array element to be search:");
    scanf("%d",&ele);
binarysearch(a,s,ele);
return 0;
}
