#include <stdio.h>
struct student
{
    char name[50];
    int marks[5];
    int total;
    float perc;
};
int main()
{
    struct student std;
    int p;
    printf("Enter name:");
    gets(std.name);
    std.total =0;
    for (int i = 0; i <5; i++)
    {
        printf("marks in subject %d:",i+1);
        scanf("%d", &std.marks[i]);
        std.total += std.marks[i];
    }
    for (int i = 0; i<5; i++)
    {
        printf("marks of subject %d is %d \n",i+1, std.marks[i]);
    }
    std.perc = std.total /5;
    printf("name=%s \n Total=%d\n percentage=%f", std.name, std.total, std.perc);
    return 0;
}