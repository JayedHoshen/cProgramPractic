#include <stdio.h>

double find_average(int ara[], int n);

int main()
{
    int ara[] = {1, 2, 3, 4, 5, 2};
    int n = 6;
    double avg = find_average(ara, n);
    printf("%lf\n", avg);

    return 0;
}

double find_average(int ara[], int n)
{
    int sum = 0, i;
    double average;

    for (i = 0; i < n; i++) {
        sum += ara[i];
    }
    average = (double)sum / n;
    return average;
}

