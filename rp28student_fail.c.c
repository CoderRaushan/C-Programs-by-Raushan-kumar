#include<stdio.h>
int main()
{
    float physics,chemistry,math;
    float marks;
    printf("Enter your physics,chemistry and math marks");
    scanf("%f %f %f",&physics,&chemistry,&math);
   marks=(physics+chemistry+math)/3;
   if ( physics<33 || chemistry<33 || math<33 )
{	
printf("you are fail your percentage is %f",marks);
}
else {
printf("you are pass and your percentage is %f",marks);
}
return 0;
} 
