// Accept a number from user and print if it is multiple of 7 in- C
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number - ");
    scanf("%d", &n);

    if (n % 7 == 0) printf("Number is multiple of 7.\n");
    else printf("Number is not multiple of 7.\n");

    return 0;
}

