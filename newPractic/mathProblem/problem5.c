#include <stdio.h>

int main()
{
    int i, n, sum;

    scanf("%d", &n);

    for (i = 1, sum = 0; i <= n; i+=2) {
        sum = sum + i;
    }

    printf("Summation is %d\n", sum);

    return 0;
}

/*
#include <stdio.h>

int main()
{
    int n, sum;

    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    printf("Summation is %d\n", sum);

    return 0;
}*/
