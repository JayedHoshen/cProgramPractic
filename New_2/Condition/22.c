#include <stdio.h>

int main()
{
    int n, i, m;

    for (n = 1; n <= 20; n = n + 1) {
        m = 0;
        for (i = 1; i <= 10; i = i + 1) {
            m = m + n;
            printf("%d X %d = %d\n", n, i, m);
        }
        printf("\n");
    }


    return 0;
}
