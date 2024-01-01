#include <stdio.h>
 
int main() {
 
    double S=0;
    int i;

    for(i=1; i<=100; i++)
    {
        S += (double)1/i;
    }
    printf("%.2lf\n", S);
 
    return 0;
}