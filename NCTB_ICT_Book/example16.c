#include <stdio.h>

int main()
{
    int numbers[10] = {9, 76, 2, 45, 3, 81, 25, 33, 71, 10};
    int i, sum;

    sum = 0;

    for (i = 0; i < 10; i++) {
        sum += numbers[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}
