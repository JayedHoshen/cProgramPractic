#include <stdio.h>

double array_avg(int ara[], int n);

int main()
{
    int ara[] = {17, 28, 33, 24, 10};
    int n = 5;

    double average = array_avg(ara, n);
    printf("%0.2lf\n", average);

    return 0;
}

double array_avg(int ara[], int n)
{
    int sum = 0, i;
    double avg;

    for (i = 0; i < n; i++) {
        sum = sum + ara[i];
    }

    avg = (double) sum / n;

    return avg;
}
