#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    long roll_no;
    char branch[20];
};
int main()
{
    struct student s1;  // declare the variable of student datatype
    strcpy(s1.name, "Raushan"); //setting the value id s1 variable 
    s1.roll_no = 2217063;
    strcpy(s1.branch, "Ece");
    // getting the values of student s1;
    printf("Students's name is: %s\n", s1.name);
    printf("student's rollNo. is: %ld\n", s1.roll_no);
    printf("student's branch is: %s\n", s1.branch);

    return 0;
}
