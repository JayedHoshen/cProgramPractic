// Prime number between 1 to n - C
#include <stdio.h>

int main()
{
    int n, N, i, j, p;

    printf("Enter upper limit = ");
    scanf("%d", &N);

    printf("1 to %d prime number ----\n\n", N);
    for (i = 2; i <= N; i++) {
        p = 0;
        for (j = 2; j <= i/2; j++) {
            if (i%j == 0) {
                p = 1;
                break;
            }
        }
        if (p == 0) printf("%d Prime\n", i);
    }

    return 0;
}
