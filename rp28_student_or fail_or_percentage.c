#include<stdio.h>
int main()
{
while(1==1)
{
    float physics,chemistry,math;
    float marks;
    printf("Enter your physics,chemistry and math marks:\n");
    scanf("%f %f %f",&physics,&chemistry,&math);
   marks=(physics+chemistry+math)/3;
   if (( marks<40 )||physics<33 || chemistry<33 || math<33 )
{	
printf("you are fail your percentage is %f\n",marks);
}
else {
printf("you are pass and your percentage is=%f\n",marks);
}}
return 0;
}
