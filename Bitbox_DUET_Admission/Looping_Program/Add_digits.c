// Add digits of a number - C
#include <stdio.h>

int main()
{
    int num, r, sum = 0;

    printf("Enter a number = ");
    scanf("%d", &num);

    while (num != 0) {
        r = num % 10;
        num = num / 10;

        sum += r;
    }

    printf("Sum of digits of number: %d\n", sum);

    return 0;
}
