#include <stdio.h>
 
int main() {
 
    double A,R, n = 3.14159;
    scanf("%lf", &R);
    printf("A=");
    A = n * R * R;
    printf("%.4lf\n", A);
 
    return 0;
}