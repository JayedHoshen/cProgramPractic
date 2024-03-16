#include <stdio.h>

int f_calls = 0;

int sum(int n) {
    f_calls++;
    if(n == 1) return 1;
    return sum(n - 1) + n;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("Summation of first %d natural number is %d\n", n, sum(n));
    printf("Faction Calls = %d\n", f_calls);

    return 0;
}
