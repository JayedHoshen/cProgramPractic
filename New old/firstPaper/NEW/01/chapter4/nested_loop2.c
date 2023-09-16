// multiplication table 1 to 20

#include <stdio.h>

int main()
{
    int n, m, i;

    for (n = 1; n <= 20; n+= 1) {
        m = 0;

        for (i = 1; i <= 10; i+=1) {
            m = m + n;
            printf("%d X %d = %d\n", n, i, m);
        }

        printf("\n");
    }

    return 0;
}
