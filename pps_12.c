//Program to compute weekly salary of employees.
#include<stdio.h>
int main(){
     int hours,wedge,ectual_salary,overtime_salary, total_salary;
    printf("Enter the Number of hours an employees worked in a week:\n");
   scanf("%d",&hours);
   printf("Enter employees hourly wedge:\n");
    scanf("%d",&wedge);
    if(hours>40){
        int overtime = hours-40;
        ectual_salary = wedge*40;
        overtime_salary = overtime*(wedge/2);
        total_salary = ectual_salary+overtime_salary;
        printf("Ectual salary of employee is : %d \n",ectual_salary);
        printf("Extra amount as overtime salary is : %d \n ",overtime_salary);
        printf("Total salary of employee is : %d \n",total_salary);
    }
    else{
        ectual_salary = wedge*hours;
        total_salary = ectual_salary;
        printf("Tolal salary of a employee is : %d \n",total_salary);
    }
    return 0;
}