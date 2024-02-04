#include <stdio.h>

double find_avg(int a[], int n);

int main()
{
    int i, n;
    double s;

    printf("Enter series length = ");
    scanf("%d", &n);

    int ara[n];

    printf("\nEnter Series number ---------\n");

    for(i = 0; i < n; i++) scanf("%d", &ara[i]);

    s = find_avg(ara, n);
    printf("Average = %0.2lf\n", s);

    return 0;
}


double find_avg(int a[], int n) {
    int i;
    double  avg, sum = 0;

    for(i = 0; i < n; i++){
        sum += a[i];
    }

    avg = sum / n;

    return avg;
}
