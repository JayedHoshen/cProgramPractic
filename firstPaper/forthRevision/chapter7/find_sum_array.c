#include <stdio.h>

int find_sum (int ara[], int n);

int main()
{
    // first array, sum of array
    int ara[] = {150, 50, 40, 100, 50, 20, 30, 40, 50, 60, 70, 80, 90, 100, 450};
    int n = 15;
    int sum = find_sum(ara, n);
    printf("%d\n", sum);

    // second array, sum of array
    int ara2[] = {1, 2, 3, 4, 5};
    int n2 = 5;
    int sum2 = find_sum(ara2, n2);
    printf("%d\n", sum2);

    return 0;
}

int find_sum(int ara[], int n)
{
    int sum = 0, i;

    for (i = 0; i < n; i++) {
        sum += ara[i];
    }

    return sum;
}
