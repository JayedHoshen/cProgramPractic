#include <stdio.h>
 
int main() {
 
    double A, B, C, sum, ave;
    scanf("%lf %lf %lf", &A, &B, &C);
    if(A >= 0 && A <= 10 && B >= 0 && B <= 10 && C >= 0 && C <= 10)
    {
        sum = (A*2) + (B*3) + (C*5);
        ave = sum/(2+3+5);
        printf("MEDIA = %.1lf\n", ave);
    }
 
    return 0;
}