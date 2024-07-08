#include<stdio.h>
int main()
{
    int stu[9],i=0,j,ele;
    printf("Enter array elemenet\n");
    for(j=0;j<9;j++)
printf("searching elemenet:");
 {
scanf("%d",&stu[j]);
}
scanf("%d",&ele);
while(i<9)
{
    if(stu[i]==ele)
    { printf("elemenet is found location=%d",i);
     break;
    }
    i++;
}
if(i>=9)
printf("elemenet is not found");
    return 0;
}
