#include <stdio.h>
 
int main() {
 
    double S=0;
    int i, j;

    for(i=1, j=1; i<=39; i+=2, j*=2)
    {
        S+= (double)i/j;
    }
    printf("%.2lf\n", S);
 
    return 0;
}