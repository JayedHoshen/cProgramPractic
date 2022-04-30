// Count the total number of digit using loop - C
#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number = ");
    scanf("%d", &num);

    while (num) {
        num /= 10;
        count += 1;
    }

    printf("Total digits is = %d\n", count);

    return 0;
}
