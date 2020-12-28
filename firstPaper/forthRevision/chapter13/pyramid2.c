/*-----------------------forth-------------------------------
     CCCCC
      CCC
       C
      CCC
     CCCCC
*/

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    // first part
    for (row = n; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("C");
        }

        printf("\n");
    }

    // second part
    for (row = 2; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("C");
        }

        printf("\n");
    }

    return 0;
}
