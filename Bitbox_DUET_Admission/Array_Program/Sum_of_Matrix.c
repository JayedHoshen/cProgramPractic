// Write down a function to compute the sum of the row an n*m matrix of integer - C
#include <stdio.h>

void matrix (int row, int col);

int main()
{
    matrix(2,3);

    return 0;
}

void matrix (int row, int col) {
    int a[row][col], i, j, sum = 0;

    printf("Enter %d X %d (%d) matrix elements --\n ", row, col, row*col);

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, sum);
        sum = 0;
    }
}
