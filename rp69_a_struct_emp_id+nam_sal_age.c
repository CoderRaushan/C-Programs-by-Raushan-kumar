#include <stdio.h>
struct employee
{
    int emp_id;
    char name[20];
    float salary;
    int age;
};
int main()
{
    struct employee x;
    printf("Enter employee id:\n");
    scanf("%d", &x.emp_id);
    printf("Enter employee name:\n");
    scanf("%s", x.name);
    printf("Enter employee salary:\n");
    scanf("%f", &x.salary);
    printf("Enter employee age:\n");
    scanf("%d", &x.age);
    printf("empolyee details shown below\n");
    printf("empolyee id is:%d\n", x.emp_id);
    printf("empolyee name is:%s\n", x.name);
    printf("empolyee salary is:%f\n", x.salary);
    printf("empolyee age is:%d\n", x.age);
    return 0;
}