#include <stdio.h>

int main()
{
    int namta[10][10];
    int row, col;

    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
            namta[row][col] = (row + 1) * (col + 1);
        }
    }

    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
            printf("%d x %d = %d\n", (row + 1), (col + 1), namta[row][col]);
        }

        printf("\n");
    }



    /*int namta[10][10]; // my implementation
    int i, j;

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d X %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }*/

    return 0;
}
