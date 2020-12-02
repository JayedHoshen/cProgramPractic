#include <stdio.h>

int main()
{
    int n, sum;
    sum = 0;

    for (n = 1; n <= 100; n = n + 1) {
        sum = sum + n;
    }

    printf("Result: %d\n", sum);

    return 0;
}

/*
#include <stdio.h>

int main()
{
    int n, sum;

    sum = 0;
    n = 1;

    while (n <= 100) {
        sum = sum + n;
        n = n + 1;
    }

    printf("Result: %d\n", sum);

    return 0;
}
*/
