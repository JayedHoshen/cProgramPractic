#include <stdio.h>

int sum_of_array(int ara[], int n);

int main()
{
    int ara[] = {10, 20, 30, 40, 50};
    int n = 5;

    int array_sum = sum_of_array(ara, n);
    printf("%d\n", array_sum);

    return 0;
}

int sum_of_array(int ara[], int n)
{
    int sum = 0, i;

    for (i = 0; i < n; i++) {
        sum = sum + ara[i];
    }

    return sum;
}
