#include <stdio.h>
 
int main() {
 
    double n1, n2, sum, avg;

    while(1)
    {
        scanf("%lf", &n1);

        if(n1>=0.0 && n1<=10.0) break;

        printf("nota invalida\n");
    }

    while(1)
    {
        scanf("%lf", &n2);

        if(n2>=0.0 && n2<=10.0) break;

        printf("nota invalida\n");
    }

    sum = n1+n2;
    avg = sum/2.0;

    printf("media = %.2lf\n", avg);
 
    return 0;
}