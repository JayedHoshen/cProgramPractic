// Check a given number is positive or negative - C

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num == 0) printf("Number is Zero.\n");
    else if (num > 0) printf("Number is Positive.\n");
    else printf("Number is Negative.\n");

    return 0;
}
