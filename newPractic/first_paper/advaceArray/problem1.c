// 1 to 10 multiplication table with 2D array
#include <stdio.h>

int main()
{
    int namta[10][10];
    int row, col, even = 0, odd = 0, sum = 0;

    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
            namta[row][col] = (row + 1) * (col + 1);
            if (namta[row][col] % 2 == 0) even++;
            else odd++;
            sum += namta[row][col];
        }
    }

    printf("Even: %d, Odd: %d, Sum: %d\n", even, odd, sum);

    return 0;
}

