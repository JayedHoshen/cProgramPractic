/* Type 6: pattern printing number of N

-----------------------first-------------------------------
    Column major order.....
       1
      12
     123
      12
       1

    Row major order........
       1
      22
     333
      22
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
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%d", col);
        }
        printf("\n");
    }

    // second part
    for (row = n - 1; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%d", col);
        }
        printf("\n");
    }

    // ------------- Row major order -------------
    printf("\n----------Row major order ---------\n");

    // first part
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%d", row);
        }
        printf("\n");
    }

    // second part
    for (row = n - 1; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%d", row);
        }
        printf("\n");
    }

    return 0;
}

--------------------second-----------------------------------
   Column major order.....
       A
      AB
     ABC
      AB
       A

    Row major order........
       A
      BB
     CCC
      BB
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
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // character printing
        for (col = 1; col <= row; col++) {
            printf("%C", col+64);
        }
        printf("\n");
    }

    // second part
    for (row = n - 1; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // character printing
        for (col = 1; col <= row; col++) {
            printf("%C", col+64);
        }
        printf("\n");
    }

    // ------------- Row major order -------------
    printf("\n----------Row major order ---------\n");

    // first part
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // character printing
        for (col = 1; col <= row; col++) {
            printf("%C", row+64);
        }
        printf("\n");
    }

    // second part
    for (row = n - 1; row >= 1; row--) {
            // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // character printing
        for (col = 1; col <= row; col++) {
            printf("%C", row+64);
        }
        printf("\n");
    }

    return 0;
}

--------------------third-----------------------------------
   Column major order.....
       *
      **
     ***
      **
       *

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    // first part
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // symbol printing
        for (col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }

    // second part
    for (row = n - 1; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // symbol printing
        for (col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
