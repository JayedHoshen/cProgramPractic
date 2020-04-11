#include <stdio.h>

int fnc_calls = 0;

int factorial(int n)
{
    fnc_calls += 1;

    if(n == 0) {
        return 1;
    }
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

    printf("Number of function calls: %d\n", fnc_calls);

    return 0;
}

/*
#include <stdio.h>

int factorial(int n)
{
    if(n == 0) {
        return 1;
    }
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

    return 0;
}

*/
