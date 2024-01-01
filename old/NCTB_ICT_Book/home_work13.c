// print_multiplication_table 1 to 10 with function
#include <stdio.h>

void print_multiplication_table(int n);

int main()
{
    int i;

    for (i = 1; i <= 10; i += 1) {
        print_multiplication_table(i);
        printf("\n");
    }

    return 0;
}

void print_multiplication_table(int n)
{
    int i;

    printf("Multiplication table for %d -\n", n);

    for (i = 1; i <= 10; i += 1) {
        printf("%d X %d = %d\n", n, i, n*i);
    }
}
