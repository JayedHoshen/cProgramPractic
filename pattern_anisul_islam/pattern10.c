/* Type 10: pattern printing number of N
    12321
     121
      1
*/
#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    for (row = n; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n-row; col++) {
            printf("  ");
        }

        // first part
        for (col = 1; col <= row; col++) {
            printf("%d ", col);
        }

        // second part
        for (col = row - 1; col >= 1; col--) {
            printf("%d ", col);
        }

        printf("\n");
    }

    return 0;
}

