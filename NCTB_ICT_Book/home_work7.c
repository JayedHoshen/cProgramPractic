#include <stdio.h>

int main()
{
    int n = 1, sum = 0;

    while (n <= 500) {
        sum = sum + n;
        n = n + 2;
    }

    printf("Result: %d\n", sum);

    return 0;
}
