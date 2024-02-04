// sum of every rows
#include <stdio.h>

int main()
{
    int ara[5][5] = {
        {6, 4, 7, 8, 9},
        {3, 7, 1, 9, 9},
        {8, 6, 4, 2, 7},
        {2, 4, 2, 5, 9},
        {4, 1, 6, 7, 3}
    };
    int row, col, sum;

    for (row = 0; row < 5; row++) {
        sum = 0;

        for (col = 0; col < 5; col++) {
            sum += ara[row][col];
        }

        printf("Sum of row %d: %d\n", (row + 1), sum);
    }
    printf("\nEnd sum of row. Than start sum of col\n\n");

    // sum of col
    for (row = 0; row < 5; row++) {
        sum = 0;

        for (col = 0; col < 5; col++) {
            sum += ara[col][row];
        }

        printf("Sum of col %d: %d\n", (row + 1), sum);
    }

    return 0;
}
