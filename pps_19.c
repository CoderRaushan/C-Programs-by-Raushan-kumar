#include<stdio.h>
int main ()
{
    int num;
   int count = 0;
    double sum = 0.0;
    double avg ;
    printf("enter the number of number in the sequence:\n");
    if(scanf("%d",&num)== 1 && num > 0){
        printf("enter the sequence: \n");
        while(num--> 0){
            int temp;
            if(scanf("%d",&temp)!=1)
            break ;
            if(temp>=0){
                sum +=temp;
                count++;
                }
            }
avg=sum/count;
printf("average is %.2f\n",avg);
}
    return 0;
}