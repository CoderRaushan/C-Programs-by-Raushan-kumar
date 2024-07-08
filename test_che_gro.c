#include <stdio.h>
int main()
{
    printf("Note that please enter your marks respertevly:\n1.MATH:\n2.CHEMISTRY\n3.PPS:\n4.ENGLISH:\n5.MENTORING:\n6.CHEMISTRY LAB:\n7.PPS LAB:\n8.MANUFACTERING PRATIC:\n9.ENGLISH LAB:\n");
    int n, c, m2 = 4, che = 4, pps = 4, eng = 3, men=1,chel = 1, ppsl = 1, mfl = 2, engl = 1;
    int c1 = m2 + che + pps + eng + chel + ppsl + mfl + engl+men;
    float arr[7],o,o1,o2,o3,o4,o5,o6,o7,o8;
    for (n = 0; n <= 8; n++)
    {
        printf("Enter your marks of each subject:");
        scanf("%f", &arr[n]);
    }
    
        o=arr[0]/100*100;
        o1=arr[1]/100*100;
        o2=arr[2]/100*100;
        o3=arr[3]/100*100;
        o3=arr[3]/100*100;
        o5=arr[4]/50*100;
        o6=arr[5]/50*100;
        o7=arr[6]/50*100;
        o8=arr[7]/50*100;
    int p = ( o/ 10) + 1;
    int p1 = (o1 / 10) + 1;
    int p2 = (o2  / 10) + 1;
    int p3 = (o3  / 10) + 1;
    int p4 = (o4  / 10) + 1;
    int p5 = (o5  / 10) + 1;
    int p6 = (o6/ 10) + 1;
    int p7 = (o7  / 10) + 1;
    int p8 = (o8  / 10) + 1;
    float res = p * m2;
    float res1 = p1 * che;
    float res2 = p2 * pps;
    float res3 = p3 * eng;
    float res4 = p4 * chel;
    float res5 = p5 * ppsl;
    float res6 = p6 * mfl;
    float res7 = p7 * engl;
    float res8 = p8 * men;
    float dum = res + res1 + res2 + res3 + res4 + res5 + res6 + res7+ res8;
    float sgpa = dum / c1;
    printf("%.2f SGPA\n",sgpa);
}