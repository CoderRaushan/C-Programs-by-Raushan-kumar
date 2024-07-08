#include <stdio.h>
struct student
{
   int roll;
   char name[50];
   char branch[50];
   float marks;
   char college[50];
};
int main()
{
   struct student s;
   printf("Enter student roll:\n");
   scanf("%d", &s.roll);
   printf("Enter student Name:\n");
   scanf("%s", s.name);
   printf("Enter student branch:\n");
   scanf("%s", s.branch);
   printf("Enter student marks:\n");
   scanf("%f", &s.marks);
   printf("Enter student college name:\n");
   scanf("%s", s.college);
   printf("The information of student shown below:\n");
   printf("Roll: %d\n", s.roll);
   printf("Name: %s\n", s.name);
   printf("Branch:%s\n", s.branch);
   printf("Marks: %.2f\n", s.marks);
   printf("College Name:%s\n", s.college);
   return 0;
}
