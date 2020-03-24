#include <stdio.h>
 
int main() {
    
    double n, pi = 3.14159, res;
    scanf("%lf", &n);
    res = (4.0/3.0)*pi*(n*n*n);
    printf("VOLUME = %.3lf\n", res);
 
    return 0;
}