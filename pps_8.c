
#include<stdio.h>
int main ()
{
    int sub1,sub2,sub3,sub4;
    printf("Enter marks of four subjects respectively\n");
    scanf("%d %d %d %d",&sub1,&sub2,&sub3,&sub4);
    (sub1>=33)?printf("Student is passed in sub 1\n"):printf("Student is fail in sub 1\n");
    (sub2>=33)?printf("Student is passed in sub 2\n"):printf("Student is fail in sub 2\n");
    (sub3>=33)?printf("Student is passed in sub 3\n"):printf("Student is fail in sub 3\n");
    (sub4>=33)?printf("Student is passed in sub 4\n"):printf("Student is fail in sub 4\n");
    return 0;
}
