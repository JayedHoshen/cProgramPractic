/* Type 3: pattern printing number of N

-----------------------first-------------------------------
    Column major order.....
    1
    1 2
    1 2 3
    1 2
    1

    Row major order........
    1
    2 2
    3 3 3
    2 2
    1

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    // -------------- Column major order -----------
    printf("\n----------Column major order ---------\n");

    // first part
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

    // second part
    for (row = n - 1; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

    // ------------- Row major order -------------
    printf("\n----------Row major order ---------\n");

    // first part
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            printf("%d ", row);
        }
        printf("\n");
    }

    // second part
    for (row = n - 1; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}

--------------------second-----------------------------------
   Column major order.....
    A
    A B
    A B C
    A B
    A

    Row major order........
    A
    B B
    C C C
    B B
    A

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    // -------------- Column major order -----------
    printf("\n----------Column major order ---------\n");

    // first part
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            printf("%C ", col+64);
        }
        printf("\n");
    }

    // second part
    for (row = n - 1; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            printf("%C ", col+64);
        }
        printf("\n");
    }

    // ------------- Row major order -------------
    printf("\n----------Row major order ---------\n");

    // first part
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            printf("%C ", row+64);
        }
        printf("\n");
    }

    // second part
    for (row = n - 1; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            printf("%C ", row+64);
        }
        printf("\n");
    }

    return 0;
}
--------------------third-----------------------------------
   Column major order.....
    *
    * *
    * * *
    * *
    *

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    // first part
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }

    // second part
    for (row = n - 1; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

