#include <stdio.h>

void fizzbuzz_calculate(int n);

int main()
{
    int i;

    for (i = 1; i <= 100; i += 1)     {
        printf("%d: ", i);
        fizzbuzz_calculate(i);
    }

    return 0;
}

void fizzbuzz_calculate(int n)
{
    if (n % 3 == 0 && n % 5 == 0) {
        printf("FizzBuzz\n");
    }
    else if (n % 3 == 0) {
        printf("Fizz\n");
    }
    else if (n % 5 == 0) {
        printf("Buzz\n");
    }
    else {
        printf("\n");
    }
}
