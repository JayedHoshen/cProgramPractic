#include <stdio.h>

int main()
{
    int namta[10][10];
    int row, col, sum = 0, even = 0, odd = 0;

    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
            namta[row][col] = (row + 1) * (col + 1);
            sum += namta[row][col];

            if (namta[row][col] % 2 == 0) even++;
            if (namta[row][col] % 2 != 0) odd++;
        }
    }

    printf("Namta array's:--- Even number is %d, Odd number is %d, Sum is %d\n", even, odd, sum);

    return 0;
}
