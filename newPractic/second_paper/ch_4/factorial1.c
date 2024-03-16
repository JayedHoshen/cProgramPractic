#include <stdio.h>

int f_call = 0;

int factorial(int n) {
    f_call = f_call + 1;

    if(n == 0) return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;

    scanf("%d", &n);

    if(n < 0) {
        printf("Undefined\n");
        return 0;
    }

    printf("Factorial of %d is %d\n", n, factorial(n));
    printf("Number of function calls: %d\n", f_call);

    return 0;
}

