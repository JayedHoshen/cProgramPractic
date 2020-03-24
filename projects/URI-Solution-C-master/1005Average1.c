#include <stdio.h>
 
int main() {
 
         double A, B, sum, ave;
        scanf("%lf %lf", &A, &B);
        if(A >= 0 && A <= 10 && B >= 0 && B <= 10)
        {
            sum = (A*3.5) + (B*7.5);
            ave = sum/(3.5+7.5);
            printf("MEDIA = %.5lf\n", ave);
        }
        
 
    return 0;
}