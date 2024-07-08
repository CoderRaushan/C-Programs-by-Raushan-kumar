#include <stdio.h>
int main()
{
    printf("Note that please enter your percentage respertevly:\n1.MATH:\n2.CHEMISTRY\n3.PPS:\n4.ENGLISH:\n5.CHEMISTRY LAB:\n6.PPS LAB:\n7.MANUFACTERING PRATIC:\n8.ENGLISH LAB:\n");
    int n, c,  m2 = 4, che = 4, pps = 4, eng = 3, chel = 1, ppsl = 1, mfl = 2, engl = 1;
    int c1 = m2 + che + pps + eng + chel + ppsl + mfl + engl;
float arr[7];
    for (n = 0; n <= 7; n++)
    {
        printf("Enter your each subject percentage:");
        scanf("%d", &arr[n]);
    }
    int p = (arr[0] / 10) + 1;
    int p1 = (arr[1] / 10) + 1;
    int p2 = (arr[2] / 10) + 1;
    int p3 = (arr[3] / 10) + 1;
    int p4 = (arr[4] / 10) + 1;
    int p5 = (arr[5] / 10) + 1; 
    int p6 = (arr[6] / 10) + 1;
    int p7 = (arr[7] / 10) + 1;
    
    float res = p * m2;
    float res1 = p1 * che;
    float res2 = p2 * pps;
    float res3 = p3 * eng;
    float res4 = p4 * chel;
    float res5 = p5 * ppsl;
    float res6 = p6 * mfl;
    float res7 = p7 * engl;
   
    float dum = res + res1 + res2 + res3 + res4 + res5 + res6 + res7;
    float sgpa = dum / c1;
    printf("%.2f SGPA\n", arr[1]);
}