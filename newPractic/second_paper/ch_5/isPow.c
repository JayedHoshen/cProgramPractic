#include <stdio.h>

int main()
{
    int n, x;

    scanf("%d", &n);

    x = n & (n - 1);
    if(n > 0 && x == 0) {
        printf("%d is a power of 2\n", n);
    }
    else {
        printf("%d is NOT a power of 2\n", n);
    }

    return 0;
}
