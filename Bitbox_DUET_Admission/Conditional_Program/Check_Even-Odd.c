// Write a program Check Even and Odd number using conditional operator- C
#include <stdio.h>

int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    n % 2 == 0 ? printf("Even Number.\n"):printf("Odd Number.\n");

    return 0;
}
