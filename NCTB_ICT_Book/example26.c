// print_multiplication_table any integer number
#include <stdio.h>

void print_multiplication_table(int n);

int main()
{
    int num;

    scanf("%d", &num);

    print_multiplication_table(num);

    return 0;
}

void print_multiplication_table(int n)
{
    int i;

    printf("Multiplication table for %d -\n", n);

    for (i = 1; i <= 10; i = i + 1) {
        printf("%d X %d = %d\n", n, i, n*i);
    }
}
