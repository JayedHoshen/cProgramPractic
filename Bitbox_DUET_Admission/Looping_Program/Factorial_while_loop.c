// Calculate factorial of a number using while loop - C
#include <stdio.h>

int main()
{
    int fact = 1, num;

    printf("Enter a number = ");
    scanf("%d", &num);

    while (num >= 1) {
        fact *= num;
        num --;
    }

    printf("Factorial value is = %d\n", fact);

    return 0;
}
