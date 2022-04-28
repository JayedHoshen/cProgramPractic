// Check the given number is palindrome number or not - C
#include <stdio.h>

int main()
{
    int r, num, temp, sum = 0;

    printf("Enter a number = ");
    scanf("%d", &num);

    temp = num;

    while (num) {
        r = num % 10;
        num = num / 10;

        sum = sum * 10 + r;
    }

    if (temp == sum) printf("%d is a palindrome.\n", temp);
    else printf("%d is not a palindrome.\n", temp);

    return 0;
}
