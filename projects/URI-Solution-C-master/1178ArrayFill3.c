#include <stdio.h>
 
int main() {
 
    int i;
    double n, x[100];
    
    for(i=0; i<100; i++)
    {
        scanf("%lf", &n);
    }
    
    x[0] = n;
    
    for(i=1; i<100; i++)
    {
        x[i] = x[i-1]/2.0;
    }
    
    for(i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n", i, x[i]);
    }
 
    return 0;
}