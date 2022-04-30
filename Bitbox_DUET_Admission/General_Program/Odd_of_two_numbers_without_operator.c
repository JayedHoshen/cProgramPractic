// Difference of two numbers without - operator - C
#include <stdio.h>

int main()
{
    int a, b;
    int val;

    printf("Enter any two integers: ");
    scanf("%d %d", &a, &b);

    val = a + ~ b + 1;

    printf("Difference of two integers: %d\n", val);

    return 0;
}
