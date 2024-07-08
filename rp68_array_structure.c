#include <stdio.h>
struct employee
{
    int emp_id;
    char name[20];
    float salary;
};
int main()
{
    int i, n;
    struct employee d[10];
    for (i = 0; i <= 2; i++)
    {
        printf("Enter details for employee:%d \nemployee id:\nname:\nsalary:\n", i + 1);
        scanf("%d", &d[i].emp_id);
        scanf("%s", d[i].name);
        scanf("%f", &d[i].salary);
    }
    printf("Enter empolyee id to search:");
    scanf("%d", &n);
    for (i = 0; i <= 2; i++)
    {
        if (n == d[i].emp_id)
        {
            printf("empolyee id is:%d\n", d[i].emp_id);
            printf("empolyee name is:%s\n", d[i].name);
            printf("empolyee salary is:%f\n", d[i].salary);
            return 0;
        }
    }
    printf("Data not valid");
    return 0;
}