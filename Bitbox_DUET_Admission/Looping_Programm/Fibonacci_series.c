// Write a program to generate the nth Fibonacci series - C
#include <stdio.h>

int main()
{
    int i, n, c, a = 0, b = 1;

    printf("Enter how many number you want to see = ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    for (i = 1; i <= n-2; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
