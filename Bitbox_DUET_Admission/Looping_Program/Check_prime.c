// Check prime number - C
#include <stdio.h>

int main()
{
    int i, num, p = 0;

    printf("Please enter a number = ");
    scanf("%d", &num);

    for (i = 2; i <= num/2; i++) {
        if (num%i == 0) {
            p = 1;
            break;
        }
    }

    if (p == 0) printf("%d prime number.\n", num);
    else printf("%d not a prime number.\n", num);

    return 0;
}
