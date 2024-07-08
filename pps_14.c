#include <stdio.h> //Q14
int main()
{
    int marks, eng, math, pps, che;
    printf("enter the marks of English,maths,pps,che, : ");
    scanf("%d %d %d %d",&eng,&math,&pps,&che);
    marks = (eng + math + pps + che)/4;
    if (marks >= 90 && marks <= 100)
    {
        printf("your grade is A++");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("your grade is A");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("your grade is B");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("your grade is C");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("your grade is D");
    }
     else if (marks >= 40 && marks < 50)
    {
        printf("your grade is E");
    }
    else
    {
        printf("you are fail");
    }
    return 0;
}