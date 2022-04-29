// Print upper triangular matrix - C
#include <stdio.h>

int main()
{
    int rows, cols, size, row, col, sum = 0;
    int inputMatrix[50][50];

    printf("Enter size square matrix = ");
    scanf("%d", &size);

    rows = cols = size;

    printf("Enter Matrix of size %d X %d \n", rows, cols);

    for (row = 0; row < rows; row++) {
        for (col = 0; col < cols; col++) {
            scanf("%d", &inputMatrix[row][col]);
        }
    }

    for (row = 0; row < rows; row++) {
        for (col = 0; col < cols; col++) {
            if (row < col) {
                sum += inputMatrix[row][col];
            }
        }
    }

    printf("Sum of Upper triangular Matrix Elements\n%d", sum);

    return 0;
}
