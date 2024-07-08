#include <stdio.h>
void areacircle(float a);
void arearectangle(int e, int d);
void areasquare(int c);
int main()
{
    int n, e, d;
    float a, b, c1, o;
    char ch, ch1, c, r, s;
    printf("enter your choice\n1 for area of circle:\n2 for area of rectangle:\n3 for area of square:\n");
    scanf("%d", &n);

    switch (n)
    {

    case 1:
    {
        printf("Enter the radius r:");
        scanf("%f", &a);
        areacircle(a);
        break;
    }
case 2:    {
        printf("Enter the value of e and d:");
        scanf("%d %d", &e, &d);
        arearectangle(e, d);
        break;
    }
    case 3:
    {
        printf("Enter the value of c1:");
        scanf("%f",&c1);
        areasquare(c1);
        break;
    }
    default:
    printf("nothing");
    return 0;
    }
}
void areacircle(float a)
{
    float y;
    y = 3.14 * a * a;
    printf("area of circle is:%f\n",y);
}
void arearectangle(int e, int d)
{
    int t;
    t= e * d;
    printf(" area of rectangle is:%d\n",t);
}
void areasquare(int c1)
{
float o;
    o= c1*c1;
    printf("area of squre is:%f\n",o);
}